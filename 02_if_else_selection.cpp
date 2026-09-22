// Program 02: if-else Selection
// Unit I - Control structure: if-else (selection)
// Compile: g++ -std=c++17 -Wall program02.cpp -o program02

#include <iostream>
using namespace std;
int main() {
  // Marks obtained by the student.
  int marks = 45;
  // Selection: pass when marks are 40 or more, otherwise fail.
  if (marks >= 40) {
     cout << "Pass";

    } else {
       cout << "Fail";
    }
    return 0;
}
