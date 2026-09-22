// Program 01: Basic Data Types
// Unit I - Basic data types (int, char, float) and console output
// Compile: g++ -std=c++17 -Wall program01.cpp -o program01

#include <iostream>
using namespace std;
int main() {
  // int stores whole numbers, char stores one character, float stores decimal numbers.
  int roll = 101;
  char grade = 'A';
  float fee = 12500.50;
  // cout prints each value; endl moves the cursor to the next line.
  cout << "Roll No: " << roll << endl;
  cout << "Grade: " << grade << endl;
  cout << "Fee: " << fee << endl;
  return 0;
}
