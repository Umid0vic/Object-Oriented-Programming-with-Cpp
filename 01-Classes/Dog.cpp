#include <iostream>
#include <string>

using namespace std;

// Define the Dog class
class Dog {
 public:
  // Constructor: initialize the dog with a name and age
  Dog(string name, int age);
  // Member function: make the dog bark
  void bark();
  // Member function: set the dog's name
  void setName(string name);
  // Member function: get the dog's name
  string getName();
  // Member function: set the dog's age
  void setAge(int age);
  // Member function: get the dog's age
  int getAge();

 private:
  // Data member: the dog's name
  string name;
  // Data member: the dog's age
  int age;
};

// Constructor implementation
Dog::Dog(string name, int age) {
  // Initialize the data members with the passed values
  this->name = name;
  this->age = age;
}

// Member function implementation: make the dog bark
// The :: operator specifies that this is a member function of the Dog class
void Dog::bark() {
  cout << "Bark! Bark!" << endl;
}

// Member function implementation: set the dog's name
void Dog::setName(string name) {
  this->name = name;
}

// Member function implementation: get the dog's name
string Dog::getName() {
  return name;
}

// Member function implementation: set the dog's age
void Dog::setAge(int age) {
  this->age = age;
}

// Member function implementation: get the dog's age
int Dog::getAge() {
  return age;
}

int main() {
  // Create a new Dog object with the name "Fido" and the age 3
  Dog myDog("Fido", 3);
  // Make the dog bark
  myDog.bark();
  // Set the dog's name to "Buddy"
  myDog.setName("Buddy");
  // Set the dog's age to 5
  myDog.setAge(5);
  // Print the dog's name and age
  cout << myDog.getName() << " is " << myDog.getAge() << " years old." << endl;
  return 0;
}

