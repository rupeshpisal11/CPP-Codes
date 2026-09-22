// Program 03: Loop and Array
// Unit I - Arrays and the for loop
// Compile: g++ -std=c++17 -Wall program03.cpp -o program03

#include <iostream>
using namespace std;
int main() {
  // Array of five marks; the index runs from 0 to 4.
  int marks[5] = {78, 82, 91, 67, 88};
  // The loop repeats five times; i is the index of the current element.
  for (int i = 0; i < 5; i++) {
     cout << marks[i] << " ";
  }
  return 0;
}
