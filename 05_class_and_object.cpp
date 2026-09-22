// Program 05: Class and Object
// Unit I - Class, object, data members and member functions
// Compile: g++ -std=c++17 -Wall program05.cpp -o program05

#include <iostream>
using namespace std;
// A class is a blueprint that groups data and functions together.
class Student {
public:
  string name;

   int age;
   // Member function: prints the data of the object it is called on.
   void show() {
      cout << name << " " << age << endl;
   }
};
int main() {
   // s1 is an object (an instance) of the Student class.
   Student s1;
   // The dot operator accesses public members of an object.
   s1.name = "Amit";
   s1.age = 20;
   s1.show();
   return 0;
}
