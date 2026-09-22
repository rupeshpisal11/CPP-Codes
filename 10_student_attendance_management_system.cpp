// Program 10: Student Attendance Management System
// Unit I - Encapsulation, constructor, member functions
// Compile: g++ -std=c++17 -Wall program10.cpp -o program10

#include <iostream>
#include <string>
using namespace std;

// Stores one student's attendance record; data is kept private.
class Student {
private:
  int rollNo;
  string name;
  int totalDays;
  int presentDays;

public:
  // Constructor: the attendance counters start at zero.
  Student(int r, string n)
     : rollNo(r), name(n), totalDays(0), presentDays(0) {}

  // Called once per class: total days always increases, present days only if present.
  void markAttendance(bool isPresent) {

         totalDays++;
         if (isPresent) {
             presentDays++;
         }
     }

     // Returns attendance as a percentage.
     double getAttendancePercentage() const {
         // Avoid division by zero when no classes have been held.
         if (totalDays == 0) {
             return 0.0;
         }
         // 100.0 forces floating-point division so decimals are kept.
         return (presentDays * 100.0) / totalDays;
     }

     void display() const {
         cout << "Roll: " << rollNo
             << " | Name: " << name
             << " | Attendance: " << getAttendancePercentage() << "%" << endl;
     }
};

int main() {
     // Create two student objects, each with its own attendance data.
     Student s1(101, "Rahul");
     Student s2(102, "Priya");

     s1.markAttendance(true);
     s1.markAttendance(true);
     s1.markAttendance(false);

     s2.markAttendance(true);
     s2.markAttendance(true);
     s2.markAttendance(true);

    cout << "=== Attendance Report ===" << endl;
    s1.display();
    s2.display();
}
