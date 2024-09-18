import re
import random
import smtplib
import pyttsx3
import speech_recognition as sr
import datetime
import webbrowser
import wikipedia
import os
import pvporcupine
import pyaudio
import struct
import subprocess
from ytmusicapi import YTMusic
import torch
from transformers import GPT2Tokenizer,GPT2LMHeadModel
model_name="gpt2"
tokenizer=GPT2Tokenizer.from_pretrained(model_name)
model=GPT2LMHeadModel.from_pretrained(model_name)
model=GPT2LMHeadModel.from_pretrained(model_name)
device=torch.device('cuda' if torch.cuda.is_available() else 'cpu')
model.to(device)
ytmusic=YTMusic()
engine = pyttsx3.init("sapi5")
voices = engine.getProperty("voices")
engine.setProperty("voice",voices[0].id)
def speak(audio):
    engine.say(audio)
    engine.runAndWait()
def wishMe():
    speak("Haare Krishna Samarth! DAS is always here at your service!")
    print("Welcome Back! DAS is always here at your service!")
def SayTime():
    strTime = datetime.datetime.now().strftime("%H:%M:%S")    
    speak(f"the time is {strTime}")
def RecieveOrder():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Awaiting your Orders")    
        r.pause_threshold = 1
        audio = r.listen(source)
        try:
            print("Please Wait for Speech Recognition...")
            order = r.recognize_google(audio)
            print("You have said:",order)        
        except Exception as e:
            print("Can you repeat again?",e)
            speak("Can you repeat again?")
            return "None"     
        return order.strip()
def exe_open(codePath):
    os.startfile(codePath)
def sendEmail(to, content):
    try:
        server=smtplib.SMTP('smtp.gmail.com', 587)
        server.ehlo()
        server.starttls()
        server.login("garoldwerner2512@gmail.com","GaroldWerner#2512")
        server.sendmail('programmingatkmce@gmail.com',to,content)
        server.close()
        speak("Email has been sent!")
    except Exception as e:
        print(e)
        speak("Sorry Samarth. I am not able to send this email")
def playmusic(order):
    search=ytmusic.search(order,filter="songs")
    if not search:
        print("Couldn't find the song... Please retry.")
        speak("Sorry Samarth. I couldn't find any results.")
        return
    first=search[0]
    url="http://music.youtube.com/watch?v="+first["videoId"]
    speak(f"Playing {first['title']} by {first['artists'][0]['name']}")
    webbrowser.open(url)
def playgame():
    c1=0
    c2=0
    while True:
        speak("Okay, let's play Rock Paper Scissors. Please speak either 'Rock' or 'Paper' or 'Scissors' for selecting your choice.")
        print("You are now playing Rock, Paper, Scissors with Das. Speak 'Rock' or 'Paper' or 'Scissors' aloud for selecting your choice.")
        order = RecieveOrder().lower()
        if "rock" in order:
            uc = 0
        elif "paper" in order:
            uc = 1
        elif "scissors" in order:
            uc = 2
        else:
            speak("Invalid choice, please speak either 'Rock', 'Paper', or 'Scissors'.")
            print("Invalid choice, please speak either 'Rock', 'Paper', or 'Scissors'.")
            continue
        cc = random.randint(0, 2)
        choices = ["rock", "paper", "scissors"]
        speak(f"My choice is {choices[cc]}")
        print(f"DAS choice: {choices[cc]}")
        if uc == cc:
            speak("It's a draw.")
            print("It's a draw.")
        elif (uc == 0 and cc == 2) or (uc == 1 and cc == 0) or (uc == 2 and cc == 1):
            speak("You win!")
            print("You win!")
            c1 += 1
        else:
            speak("You lose!")
            print("You lose!")
            c2 += 1
        speak(f"My Points: {c2}")
        speak(f"Your Points: {c1}")
        print(f"DAS points: {c2}")
        print(f"Your points: {c1}")
        speak("Do you want to continue?")
        print("Do you want to continue?")
        order = RecieveOrder().lower()
        if "yes" in order:
            print("Continuing the game.")
            speak("Continuing the game.")
            continue
        elif "no" in order:
            speak(f"I heard you say {order}. Exiting the game.")
            print("Out of the Game now!")
            break
def wikipediasummary(order):
    try:
        context = readablilityEnhancer(wikipedia.summary(order, sentences=3))
        print(1,context)
    except wikipedia.exceptions.DisambiguationError:
        context = "It seems there are multiple topics related to your query. Please be more specific."
    except wikipedia.exceptions.PageError:
        context = "I couldn't find any information on this topic. Please try asking something else."
    except Exception as e:
        print(f"Error:{e}")
        context = "An error occurred while fetching information. Please try again later."
    return context
def other(order):
    prompt = order
    try:
        inputs = tokenizer.encode(prompt, return_tensors='pt')
        attention_mask = torch.ones(inputs.shape, device=inputs.device)
        outputs = model.generate(inputs, attention_mask=attention_mask, max_length=100, do_sample=True)
        model.config.pad_token_id = tokenizer.eos_token_id

        # Decode the generated tokens
        response = tokenizer.decode(outputs[0], skip_special_tokens=True)
        print(response)
    except Exception as e:
        response = "There might be some trouble processing your request. Please try again."
        print("Error: ",e)
    print(f"Response: {response}")
    speak(response)
def readablilityEnhancer(text):
    readableText=re.sub(r'\s*[;=]\s*|\s*\(.*?\)\s*','', text)
    return readableText.strip()
def maincode():
    wishMe()
    while True:
         order=RecieveOrder().lower()
         if order=="none":
             continue
         elif "who are you" in order:
             print("He is DAS... A Desktop assistant always here to assist you. You can build him in your own way and sky is the limit.")   
             speak("I am DAS... A Desktop assistant always here to assist you. You can build me in your own way and Sky is the limit")
         elif "what is"in order or "tell about" in order or "who is" in order:
            order=order.replace("tell about ","").replace("who is ","")
            speak(wikipediasummary(order))
         elif "play music" in order:
            speak("Which music do you want to play?")
            print("Please speak out the title of the song.")
            songname=RecieveOrder().lower()
            playmusic(songname)       
            print("DAS is now in Stand-By mode... Call him out whenever you need assistance. Don't be hesitant.")  
            speak("i am in stand-by mode now, call me when you need help.")
            break
         elif "play local music" in order:
            speak("Playing Local music")
            music_dir = r"G:\My Drive\Synced\Downloaded Music"
            songs=os.listdir(music_dir)
            print(songs.random())
            os.startfile(os.path.join(music_dir , songs[0]))
         elif "the time" in order:
            SayTime()
         elif "open brave" in order:
            print("Opening Brave...")
            speak("Opening Brave...")
            codePath = r"C:\Program Files\BraveSoftware\Brave-Browser\Application\Brave.exe"
            exe_open(codePath)
         elif "open code" in order:
            print("Opening VS Code...")
            speak("Opening VS Code...") 
            codePath=r"C:\Program Files\Microsoft VS Code\Code.exe"   
            exe_open(codePath)
         elif 'open' and '.com' in order:
             orderlist=list(order)
             orderlist.reverse()
             n=5
             while(n>0):
               orderlist.pop()
               n-=1
             orderlist.reverse()
             order="".join(orderlist)
             print("Opening",order)
             speak(f"Opening{order}")
             webbrowser.open("http://"+order)
         elif "open" in order:
             orderlist=list(order)
             orderlist.reverse()
             n=5
             while(n>0):
                 orderlist.pop()
                 n-=1
             orderlist.reverse()
             order="".join(orderlist)
             print("Opening",order)
             speak(f"opening{order}")
             try:
                 subprocess.Popen([order],shell=True)
             except Exception as e:
                 print("Application not found")
                 speak("Sorry Samarth. I am not able to open the application")
         elif 'email to college programmers' in order:
            try:
                speak("What should I email?")
                content = RecieveOrder()
                to = "programmingatkmce@gmail.com"    
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                speak("Sorry Samarth. I am not able to send this email")
         elif "you can rest now" in order:
            print("DAS is now in Stand-By mode... Call him out whenever you need assistance. Don't be hesitant.")  
            speak("Thank you Samarth. I will be back... whenever you need me, just call me out.")
            break
         elif "how are you" in order:
             print("I'm doing great!")
             speak("I'm doing great!")
         elif "let's play a game" in order:
            playgame()
         else:
             try:
                 print("Results gonna take time when things come to here.")
                 speak("okay...")
                 other(order)
             except Exception as e:
                 print(f"Error: {e}")
                 speak("I must be trained more in this context.")
if __name__=="__main__":
    porcupine=pvporcupine.create(
        access_key="YI7du0ehljlgZJjUrpA0EyWXsm1W+LmYY3ZmqIH7uU6Yojak2ngJoA==",
        keyword_paths=[r"P:\Python\Projects\Hare-krishna-das_en_windows_v3_0_0\Hare-krishna-das_en_windows_v3_0_0.ppn"],
        sensitivities=[0.5]
    )
    pa=pyaudio.PyAudio()
    audio_stream=pa.open(
        rate=porcupine.sample_rate,
        channels=1,
        format=pyaudio.paInt16,
        input=True,
        frames_per_buffer=porcupine.frame_length
    )
    print("""Listening for the Wake Phrase 'Hare Krishna DAS'...
You can press Ctrl+C(In the terminal) to stop listening...""")
    speak("Hey there! DAS in stand-by mode here. Just call out the Wake Phrase to bring me back to work.")
    try:
        while True:
            pcm=audio_stream.read(porcupine.frame_length,exception_on_overflow=False)
            pcm = struct.unpack_from("h" * porcupine.frame_length, pcm)
            keyword_index = porcupine.process(pcm)
            if keyword_index>=0:
                print("Wake word detected!")
                maincode()
    except KeyboardInterrupt:
        print("Stopping...")
    finally:
        audio_stream.close()
        pa.terminate()
        porcupine.delete()