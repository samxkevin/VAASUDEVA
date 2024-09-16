//from freecodecamp
//link: https://www.youtube.com/watch?v=8jLOx1hD3_o
//to check whether our ide supports c++ 20 we use this program:
/* #include<iostream>
using namespace std;
int main(){
    auto result=(10<=>20)>0;
    cout<<result<<endl;
    return 0;
} */
//nesting comments is a bad practice and can cause potential errors in the code
/*
There are three kinds of errors that generally occur when we execute our code:
 1.Compile Time Error
 2.Run Time Error
 3.Logical Error
*/
/* 
-A statement is a basic unit of computation in a C++
program
-Every C++ program is a collection of statements
organized in a certain way to achieve some goal
-Statements end with a semicolon in C++ (;)
-Statements are executed in order from top to bottom when
the program is run
-Execution keeps going until there is a statement causing the
program to terminate, or run another sequence of
statements
*/
/* 
Data Execution in C++:
Function:
return_value_type(data_type) function_name(Parameter1,Parameter2...){
    Body
}
-A function must be defined before its use.
*/
/*
Variou Streams And Their Purpose:
std::cout-Printing data to the console(terminal)
std::cin-Reading data from the terminal
std::cerr-Printing errors to the console
std::clog-Printing log messages to the console
*/
/* //To Read Data With Spaces(Strings)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    cin.ignore();//it is advisable to use this line of code whenever you have used cin before getline to stop unexpected result (Hint: By default cin gives a new line...)
    getline(cin,s);//to read data with spaces(strings) and store it into one variable
    cout<<s<<endl;
    return 0;
}
*/
//Different Features in CPP: Namely, C++ core language Vs Standard library Vs STL...
/* Number Systems:
• Binary(Base 2)
• Octal
• Hexadecimal */
/* 
Digits-Data Range
1       0-1
2       0-3
3       0-7        
4       0-15
5       0-31
...     ...
n       0-2^(n)-1
*/
/*
All data is represented by a bunch of grouped cells of 0's and 1's in memory
As the range of your data grows, so will the number of digits you need to represent the data in memory
Hexadecimal system makes it a little easier for humans to handle streams of data with I 's and O's
Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times. It's just mentioned here for your awareness
*/
/*
//   !!!!!!!*******VARIABLE BRACED INITIALIZATION*******!!!!!!!   //
//WARNING! Variable may contain random garbage value
int elephant _ count;
int j{};// Initializes to zero
int dog_count {10};// Initializes to 10
int cat _ count {15};// Initializes to 15
//Can use expression as initializer
int domesticated _ animals { dog_count + cat_count } ;
// Won't compile, the expression in the braces uses undeclared variables
int bad _ initialization { doesnt_existl + doesnt_exist2 };
// 2.9 is of type double, with a wider range than int.ERROR OR WARNING.
int narrowing_conversion {2.9};//error
*/
/*
//   !!!!!!!*******Functional variable initialization*******!!!!!!!   //
int apple_count(5);
int orange_count(10);
int fruitcount(apple _ count + orange count);
int bad_initialization (doesnt_exist3 + doesnt_exist4 ) ;
// Information lost. less safe than braced initializers
int narrowingconversion_functional(2.9);//chop off .9
*/
/*
//   !!!!!!!*******Assignment Initialization*******!!!!!!!   //
int bikecount=2;
int truckcount=7;
int vehiclecount=bikecount+truckcount;
int narrowingconversionassignment=2.9;
*/
//We can know the memory allocated for a variable by sizeof() method... for both datatypes and variables
//signed-both +ve and -ve numbers can be used but in unsigned only +ve (they are basically types of int data type or also known as modifiers of the int data type)
/*
Type        Size  Precision
float       4       7
double      8       15
long double 12      >double
*/
//NaN is Naughty Number lol
/*
Remember the suffixes when initializing floating point variables, otherwise the default will be double.
Double works well in many situations, so you will see it used a lot.
*/
//setprecision() is a manipulator function or method that is used when we want to change the number of digits to be shown after the decimal point in formatting floating-point literals or modifying them.
//So the precision we set for a nuber would be the number we specify in the parenthesis of that method.
//we must be aware of narrowing conversion when playing with floating point numbers
//1.92344324e8: e8 multiplies the number before it with 10^8. Guess what happens if it is e-8 there...
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    double _=0.00000000000009352;//double store upto 15 digits
    cout<<_<<endl;//stout would be 9.352e-14 (scientific notation we use it to make some some for huge numbers)
    return 0;
} */
//execute the  above block comment
//setprecision() is a method that is the <iomanip> libraby so to use it we have to "include" that to our program first.
//there are many suffixes in the <iomanip> libraby like "std::fixed" to stop that scientific notation to be shown in stdout and show the typed quanity or value assigned to that variable
//to switch from fixed or vice-versa we use "std::scientific"
//A boolean stores uto 8 bits of memory which is wasteful mostly for embedded devices.
//To counter this and places where memory optimization is critical,
// developers often resort to using bitwise operations or custom data structures to pack multiple boolean values into a single byte or even smaller units, thus conserving memory.
// This approach can significantly reduce memory usage in embedded systems where every byte counts.
//char----- char also takes 8 bits of space
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    char _=65;
    cout<<_<<endl;
    cout<<static_cast<int>(_)<<endl;
    return 0;
} */
//Execute the aboce code and play with it... 
//you will know more about char and will find the working of it to be amazing...
//auto is a keyword that is used whenever we want the compiler to deduce the datatype of the variable.
/*
auto var1={13.0};
auto var2={14.ef};
auto var3={14.0f};
auto var4={15.01};
auto var5={'e'};
// int modifier suffixes
auto var6 { 123u};// unsigned
auto var7 { 123u1};// unsigned long
auto var8 { 12311};// long long
*/
//Be careful when reassigning with auto...
/*
auto var3 {333u};// unsigned at first...
var3=-22// ERROR: Reassigning a unsigned number to a Negitive number. DISASTER.
//It will assign a garbage value so you will a hard time sorting it out so... be careful
*/
//auto is type-deduction its like like Krishna...
//his name itself is no different from his Godliness...
//FYI- Skipped Basic operations in the video...
//PRECEDENCE AND ASSOCIATIVITY-
/* 1. ()
2. ++, --
3. *, /, %
4. +, -
5. =, +=, -=, *=, /=, %=
6. <, >, <=, >=, ==, != *///From Tabnine...
//Precedence : which operation to do first
//Associativity : which direction or which order
//Check-out operator precedence in cppreference.com
/*
It is better to make the intent in your code as clear as possible by clearly
using () to indicate which operations you want done first
*/
//Readability of your code is one of the must imortant things that you really have to
//strive for..
//Postfix increment: val++
//Prefix increment: ++val
//same for decrement
//Execute the below Block comment by switching for a better understanding
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int _=10;
    cout<<_++<<endl;//Postfix- 10 gests stdout then it is incremented and
    cout<<++_<<endl;//Prefix- 12 gets printed because we are incrementing it again and printing it...
    return 0;
} */
//Relational Operators
//New thing known
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int _=10;
    int v=11;
    cout<<boolalpha;//If you don"t use this line of code then code in parentheses in the next line will print either 0 or 1.
    cout<<"Is 10 less than 11?"<<endl<<(_<v)<<endl;
    return 0;
} */
//The Bitwise left shift and right shift operators have more precedence than the relational operators.
//Therefore we are using the parentheses in the line number 209.
//you can also try playing with other relational operators in above Block Comment.
//LOGICAL OPERATORS skipped
//OUTPUT FORMATTING
//std::setw() sets width for the text we have givem. It is like rjust(),center(),ljust() fuctions in python.
//for justification we use std::right...
//std :flush - causes immediate sending of data to the device connected to the stream
//for internal justification we use std::internal.
//We normally use this in cases where sign is left justified, and the data is right justified.
//We can use the std::fill() to fill whitespaces other character such as "-"
//We remembered by previous Block Line Comment that boolalpha and noboolalpha control ouput format 1/0
//or true or false.
//In the same way, we use showpos and noshowpos whether to show the + sign for the +ve numbers
//We use std::dec, std::hex, std::oct for the output to be shown in... you know (Refer line 58)
//We use showbase to show the base for integral types. (i.e. dec will have )
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<flush<<33333;
    cout<<flush<<111111;
}