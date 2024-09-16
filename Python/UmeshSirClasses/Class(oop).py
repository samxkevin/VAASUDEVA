#method is part of a class...
""" Creating Classes
The class statement creates a new class definition. The
name of the class immediately follows the
keyword class followed by a colon as follows —
class ClassName:
• 'Optional class documentation string'
• class suite """
#paradigm is a way of programming..
#structured: sequential,control,iterated
""" • Python supports structured as well as object-
oriented programming paradigms.
• Python is an object oriented programming
language.
Almost everything in Python is an object, with
its properties and methods.
A Class is like an object constructor, or a
"blueprint" for creating objects. """
#operator overloading and function overloading
""" A class contains data and methods that can
access or manipulate this data. Thus a class
lets us bundle data and functionality together. """
#class is generic and object is specific
#class might have unique datasets for each object but methods are the same
""" Programmatic examples of classes and objects:
i = 10 i is an object of int class
a = 3.14 # a is an object of float class
s = 'Sudesh' s is an object of str class
t = ( IO, 20. 301 1st an object of list class
• tpl = ('a', tpl an object of tuple class
int. float, str. list, tuple are readv«nade classes. """
#common things around you are very similar to the things in a class
""" We can also create our own classes, These are often
called user-defined data types.
A user-defined class Employee mav contain data like
name, age. salary and methods like
print_data( and set _ data( ) to access and manipulate
the data.
Objects created from Employee class will have specific
values for data. Hence, each object is a specific
Instance of a class. """
#creation of an object is often called as instantiation
#"The specific data in an object is often called as instance data or state of the obkject or attributes of the object"
""" class MyClass():
    x=10
p1=MyClass()
print(p1.x) """
#this convention is generic...
#MyClass() is a constructor to create an object. Name of the constructor method is case sensitive
"""# class class_name:
    #doc_string
   object=0
   def __init__(self,name,salary):
       self.name=name
       sel.salary
       Employee """
""" class Employee:
        #Common base class for all employees
        empCount=0#class variable
        def __init__(self, name, salary,age):
            self.name=name
            self. salary=salary#constructs class#
            self.age=age
            Employee.empCount+=1
        def displayCount(self):
            print("Total Employee %d" % (Employee.empCount))
        def displayEmplovee(self):
            print("Name :",self.name,",Salary:",self.salary)
        def displayAge(self):
            print("Name :",self.name,",Age:",self.age)
emp1=Employee("Shiv",2000,7)
emp2=Employee("Krishna",5000,9)
emp1.displayEmplovee()
emp2.displayEmplovee()
emp1.age=7
emp1.age=8
emp1.displayAge() """
#here init is initialization, constructor
#self is the representative of the object which you are creating
#displayCount(self),displayEmplovee(self) are user defined methods for the class created by the user
""" • Note: Ideally, you should define
your classes in separate file, then
you should import them in your
main program file
using import statement. """
""" The variable empCount is a class variable whose
value is shared among all instances of a this class,
This can be accessed as Employee. empCount from
inside the class or outside the class."""
#"The first method _init() is a special method, which is called class constructor."
#"initialization method that Python calls when you create a new instance of this class."
"""You declare other class methods like normal
functions with the exception that the first argument
to each method is self. Python adds
the self argument to the list for you; you do not
need to include it when you call the methods."""
#"To understand the meaning of a classes we have to understand the built-in __init__()
#"All classes have a fuction called __init__() ,which is always executed when the class is being initiated."
#"Using a special member function __init__()"
#"Benefit-Guaranteed initialization, as a __int__() is always called when an object is created, space is allocted in memory and __init__() is called"
#"So address of object is passed to __init__()"
#"__init__() does't return any value"
#"__init__() is called only once during entire lifetime of an object"
#"If we do not define it, then python provides a default __init__() method"
#"A class may have __init__() as well as set_data()#other functions"
""" class Shark:
    animal_type = "fish" # Class variable
new_shark = Shark() #Class constructor
print(new_shark.animal_type) """
#two attributes: class and instance
#pre defined methods, instance methods, operator overloading
#class variable: using class, variable defined before init method which is initiator or class constructor(because it is common for all variables)
#class constructor: Special method(underscore before as well as after), arguements are called in a function, parameters are given during the deinition of a variable.
""" class Employee:
        #Common base class for all employees
        empCount=0#class variable
        def __init__(self, name, salary):
            self.name=name
            self. salary=salary#constructs class
            Employee.empCount+=1
        def displayCount(self):
            print("Total Employee %d" % (Employee.empCount))
        def displayEmployee(self):
            print("Name", self.name,", Count class:", self.salary,Employee.empCount)
            print("Name:", self.name, ", Count self: ", self.salary, self.empCount)
emp1=Employee("Ram",2000)
emp1.displayEmployee()
emp2=Employee("Krishna",5000)
emp1.displayEmployee()
emp2.displayEmployee()
Employee.displayCount(1) """
#class method called using the class name
#instance variable is accesed using the class name
#class variable can be accesed using class name as well as instance name or object name(refer 124 and 125 line)...
""" 
Class: Class Variable
If the value of a variablc
is not varied from object
to object, such typos of
variables aro called class
or static variables.
All instances of a class
share class variables.
Unlike instanco variable,
the value of a class
variable is not varied
from object to object,
In Python, class variables
are declared when
a class is boing dcfinod
with class key word.
Thoy are not declared
insidc any method of a
class orin init
Because of this, only ono
copy of thc static variable
witt bc created and
shared bctwocn all class
objects. """
"""
Class: Class Variable
Accessing Class Variables
We can access class
variables by class nome or
object reference, but it •s
recommended to use the
class name
ct.„s
Mod'fv Class Vartab'es
• Genet.q:v we
value to
•nsjde the class
decl.v.'t•on. However.
of the
either in the class or
Outs.de of CIJSS.
"""
""" 
• Class Variable vs. Instance variables
• In Python, properties can be defined into two parts:
• Instance variables: The instance variable's value
varies from object to object. Objects do not share
instance variables. Every object has its copy of the
instance attribute.
• Class Variables: A class variable is a variable that is
declared inside of a class but outside of any
instance method or init() method. Class variables
are shared by all instances of a class.
`constructor is case-sensitive
"""
#Triangle:
rows=5
i=1
while(rows>0):
    print((str(rows)+" ")*i)
    rows-=1
    i+=1