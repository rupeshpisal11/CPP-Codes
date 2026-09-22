// Program 04: Functions
// Unit I - Functions, prototypes and return values
// Compile: g++ -std=c++17 -Wall program04.cpp -o program04

#include <iostream>
using namespace std;
// Function prototype: tells the compiler about add() before main().
int add(int, int);
int main() {
   int a = 10, b = 20;
   // Call add() with a and b; the returned value is printed.
   cout << "Sum = " << add(a, b) << endl;
   return 0;
}
// Function definition: x and y receive copies of a and b.
int add(int x, int y) {
   return x + y;
}
