// Program 08: Inline and Friend Function
// Unit I - Inline function and friend function
// Compile: g++ -std=c++17 -Wall program08.cpp -o program08

#include <iostream>
using namespace std;
class Test {
private:
   // private: cannot be accessed directly from outside the class.
   int value;
public:
   Test(int v) {
      value = v;
   }
   // inline: asks the compiler to place the function body at the call site.
   inline int getValue() {
      return value;
   }
   // friend function: not a member, but allowed to read private data.
   friend void show(Test t);
};
// Definition of the friend function; it can use t.value directly.
void show(Test t) {
   cout << t.value;
}
int main() {
   Test obj(50);
   cout << obj.getValue() << endl;
   show(obj);
   return 0;
}
