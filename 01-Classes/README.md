# Classes in C++

A class in C++ is a user-defined data type that represents a collection of related data and functions. It is a blueprint for creating objects, and each object that is created from a class is called an instance of the class.

## Defining a Class

To define a class in C++, you use the `class` keyword, followed by the name of the class and a set of curly braces `{}` that enclose the class definition. Within the curly braces, you can define data members (also called instance variables) and member functions (also called methods).

Here is an example of a simple class definition:

``` class Dog {
 public:
  Dog(string name, int age);
  void bark();
  void setName(string name);
  string getName();
  void setAge(int age);
  int getAge();

 private:
  string name;
  int age;
};
```

This class defines a Dog object, with data members for the dog's name and age, and member functions for setting and getting the name and age, as well as for making the dog bark.

## Creating an Object

To create an object of a class, you use the following syntax:

``` ClassName objectName;
```

For example, to create an object of the Dog class that we defined earlier, you would use the following syntax:

``` Dog myDog;
```

You can also pass arguments to the class constructor to initialize the object with specific values. For example:

Copy code
``` Dog myDog("Fido", 3);
```
This creates a Dog object with the name "Fido" and the age 3.

## Accessing Members

To access the data members and member functions of an object, you use the dot operator (.). For example:

``` myDog.setName("Buddy");
myDog.setAge(5);
cout << myDog.getName() << " is " << myDog.getAge() << " years old." << endl;
myDog.bark();
```

This would output the following:

``` Buddy is 5 years old.
Bark! Bark!
```