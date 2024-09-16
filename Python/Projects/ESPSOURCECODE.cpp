#include <Adafruit_SSD1306.h>  // Library for OLED display
#include <ESP8266WiFi.h>       // Library for ESP8266 WiFi functions
#include <BlynkSimpleEsp8266.h> // Library for Blynk integration
#include <AceButton.h>         // Library for button handling
 
#define BLYNK_TEMPLATE_ID "*****"  // Blynk template ID
#define BLYNK_TEMPLATE_NAME "********"  // Blynk template name
#define BLYNK_AUTH_TOKEN "*********"  // Blynk authentication token
 
char ssid[] = "******";  // WiFi SSID(Servive Set Identifier)
char pass[] = "******";    // WiFi password
 
int emptyTankDistance = 160;  // Distance when tank is empty (in cm)
int fullTankDistance = 20;    // Distance when tank is full (in cm)
int triggerPer = 20;          // Trigger percentage for pump activation
 
using namespace ace_button;   // Using AceButton namespace
 
#define TRIG 12                //D6 - Ultrasonic sensor trigger pin
#define ECHO 13                //D7 - Ultrasonic sensor echo pin
#define Relay 14           //D5 - Relay control pin
#define BP1 2              //D0 - Button 1 pin
#define BP2 13             //D3 - Button 2 pin
#define BP3 15             //D4 - Button 3 pin
 
#define V_B_1 V1  // Virtual pin for water level
#define V_B_3 V3  // Virtual pin for mode
#define V_B_4 V4  // Virtual pin for relay status
 
#define SCREEN_WIDTH 128  // OLED display width
#define SCREEN_HEIGHT 32  // OLED display height
 
#define OLED_RESET -1  // Reset pin for OLED
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);  // OLED display object
 
float duration;  // Variable to store ultrasonic pulse duration
float distance;  // Variable to store calculated distance
int waterLevelPer;  // Variable to store water level percentage
 
bool toggleRelay = false;  // Flag for relay state
bool modeFlag = true;      // Flag for mode (true = AUTO, false = MANUAL)
String currMode;           // String to store current mode
 
char auth[] = BLYNK_AUTH_TOKEN;  // Blynk authentication token
 
ButtonConfig config1;  // Button config for button 1
AceButton button1(&config1);  // AceButton object for button 1
ButtonConfig config2;  // Button config for button 2
AceButton button2(&config2);  // AceButton object for button 2
ButtonConfig config3;  // Button config for button 3
AceButton button3(&config3);  // AceButton object for button 3
 
void handleEvent1(AceButton*, uint8_t, uint8_t);  // Function prototype for button 1 handler
void handleEvent2(AceButton*, uint8_t, uint8_t);  // Function prototype for button 2 handler
void handleEvent3(AceButton*, uint8_t, uint8_t);  // Function prototype for button 3 handler
 
BlynkTimer timer;  // Blynk timer object
 
void checkBlynkStatus() {
  bool isconnected = Blynk.connected();  // Check if connected to Blynk
  if (isconnected == false) {
    // Handle disconnected state
  }
  if (isconnected == true) {
    // Handle connected state
  }
}
 
BLYNK_WRITE(VPIN_BUTTON_3) {  // Handler for virtual pin button 3
  modeFlag = param.asInt();
  if (!modeFlag && toggleRelay) {
    digitalWrite(Relay, LOW);
    toggleRelay = false;
  }
  currMode = modeFlag ? "AUTO" : "MANUAL";
}
 
BLYNK_WRITE(VPIN_BUTTON_4) {  // Handler for virtual pin button 4
  if (!modeFlag) {
    toggleRelay = param.asInt();
    digitalWrite(Relay, toggleRelay);
  } else {
    Blynk.virtualWrite(V_B_4, toggleRelay);
  }
}
 
BLYNK_CONNECTED() {  // Handler for Blynk connection event
  Blynk.syncVirtual(V_B_1);
  Blynk.virtualWrite(V_B_3, modeFlag);
  Blynk.virtualWrite(V_B_4, toggleRelay);
}
 
void displayData() {  // Function to update OLED display
  display.clearDisplay();
  display.setTextSize(3);
  display.setCursor(30, 0);
  display.print(waterLevelPer);
  display.print(" ");
  display.print("%");
  display.setTextSize(1);
  display.setCursor(20, 25);
  display.print(currMode);
  display.setCursor(95, 25);
  display.print(toggleRelay ? "ON" : "OFF");
  display.display();
}
 
void measureDistance() {  // Function to measure water level
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(20);
  digitalWrite(TRIG, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = ((duration / 2) * 0.343) / 10;
  if (distance > (fullTankDistance - 15) && distance < emptyTankDistance) {
    waterLevelPer = map((int)distance, emptyTankDistance, fullTankDistance, 0, 100);
    Blynk.virtualWrite(V_B_1, waterLevelPer);
    if (waterLevelPer < triggerPer) {
      if (modeFlag) {
        if (!toggleRelay) {
          digitalWrite(Relay, HIGH);
          toggleRelay = true;
          Blynk.virtualWrite(V_B_4, toggleRelay);
        }
      }
    }
    if (distance < fullTankDistance) {
      if (modeFlag) {
        if (toggleRelay) {
          digitalWrite(Relay, LOW);
          toggleRelay = false;
          Blynk.virtualWrite(V_B_4, toggleRelay);
        }
      }
    }
  }
  displayData();
  delay(100);
}
 
void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(Relay, OUTPUT);
 
  pinMode(BP1, INPUT_PULLUP);  // Set button pins as input with pull-up
  pinMode(BP2, INPUT_PULLUP);
  pinMode(BP3, INPUT_PULLUP);
 
  digitalWrite(Relay, HIGH);  // Initialize relay state
 
  config1.setEventHandler(button1Handler);  // Set button event handlers
  config2.setEventHandler(button2Handler);
  config3.setEventHandler(button3Handler);
 
  button1.init(BP1);  // Initialize buttons
  button2.init(BP2);
  button3.init(BP3);
 
  currMode = modeFlag ? "AUTO" : "MANUAL";  // Set initial mode
 
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {  // Initialize OLED display
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  delay(1000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.clearDisplay();
 
  WiFi.begin(ssid, pass);  // Connect to WiFi
  timer.setInterval(2000L, checkBlynkStatus);  // Set timer for Blynk status check
  timer.setInterval(1000L, measureDistance);   // Set timer for distance measurement
  Blynk.config(auth);  // Configure Blynk
  delay(1000);
 
  Blynk.virtualWrite(V_B_3, modeFlag);  // Update Blynk virtual pins
  Blynk.virtualWrite(V_B_4, toggleRelay);
 
  delay(500);
}
 
void loop() {
  Blynk.run();  // Run Blynk
  timer.run();  // Run timer
  button1.check();  // Check button states
  button3.check();
 
  if (!modeFlag) {
    button2.check();  // Check button 2 only in MANUAL mode
  }
}
 
void button1Handler(AceButton* button, uint8_t eventType, uint8_t buttonState) {
  Serial.println("EVENT1");
  switch (eventType) {
    case AceButton::kEventReleased:
      if (modeFlag && toggleRelay) {
        digitalWrite(Relay, LOW);
        toggleRelay = false;
      }
      modeFlag = !modeFlag;
      currMode = modeFlag ? "AUTO" : "MANUAL";
      Blynk.virtualWrite(V_B_3, modeFlag);
      break;
  }
}
 
void button2Handler(AceButton* button, uint8_t eventType, uint8_t buttonState) {
  Serial.println("EVENT2");
  switch (eventType) {
    case AceButton::kEventReleased:
      if (toggleRelay) {
        digitalWrite(Relay, LOW);
        toggleRelay = false;
      } else {
        digitalWrite(Relay, HIGH);
        toggleRelay = true;
      }
      Blynk.virtualWrite(V_B_4, toggleRelay);
      delay(1000);
      break;
  }
}
 
void button3Handler(AceButton* button, uint8_t eventType, uint8_t buttonState) {
  Serial.println("EVENT3");
  switch (eventType) {
    case AceButton::kEventReleased:
      // Button 3 event handling (currently empty)
      break;
  }
}


