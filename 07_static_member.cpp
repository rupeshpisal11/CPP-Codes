// Program 07: Static Member
// Unit I - Static data member
// Compile: g++ -std=c++17 -Wall program07.cpp -o program07

#include <iostream>
using namespace std;
class Student {
public:
   // static member: one copy shared by all objects of the class.
   static int count;
   Student() {
      // Every new object increases the shared counter.
      count++;
   }
};
// A static data member must be defined (and initialised) outside the class.
int Student::count = 0;
int main() {
   Student s1, s2, s3;
   // Access the static member using the class name; prints 3.
   cout << Student::count;
   return 0;
}
