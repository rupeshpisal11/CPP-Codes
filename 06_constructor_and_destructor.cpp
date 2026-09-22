// Program 06: Constructor and Destructor
// Unit I - Constructors and destructors
// Compile: g++ -std=c++17 -Wall program06.cpp -o program06

#include <iostream>
using namespace std;
class Demo {
public:
   // Constructor: runs automatically when an object is created.
   Demo() {
      cout << "Constructor called\n";
   }
   // Destructor: runs automatically when the object is destroyed.
   ~Demo() {
      cout << "Destructor called\n";
   }

};
int main() {
   // Creating d calls the constructor; leaving main() calls the destructor.
   Demo d;
   return 0;
}
