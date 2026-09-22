# Chapter 1: Fundamentals of Object-Oriented Programming

## Student Details

| Field | Details |
|---|---|
| Student Name | Rupesh Rajaram Pisal |
| PRN | 126UAD2028 |
| Class / Division | S.Y. B.Tech. (Artificial Intelligence and Data Science) / Div. F |
| Course Name | Object-Oriented Programming with C++ (ADPC303) |
| GitHub Username | [rupeshpisal11](https://github.com/rupeshpisal11) |

## Programs (11)

| Program | Title | OOP Concept | Description |
|---|---|---|---|
| [01_basic_data_types.cpp](01_basic_data_types.cpp) | Basic Data Types | Basic data types (int, char, float) and console output | Stores a student's roll number, grade and fee in variables of type int, char and float and prints them with cout. It shows how each basic data type holds a different kind of value. |
| [02_if_else_selection.cpp](02_if_else_selection.cpp) | if-else Selection | Control structure: if-else (selection) | Checks whether a student's marks are at least 40 and prints Pass or Fail. It shows how an if-else statement chooses one of two paths. |
| [03_loop_and_array.cpp](03_loop_and_array.cpp) | Loop and Array | Arrays and the for loop | Stores the marks of five students in an array and prints them using a for loop. It shows how an array holds many values of one type and how a loop visits each element by index. |
| [04_functions.cpp](04_functions.cpp) | Functions | Functions, prototypes and return values | Defines an add() function that returns the sum of two integers and calls it from main(). It shows the function prototype, the function call, parameters and the return value. |
| [05_class_and_object.cpp](05_class_and_object.cpp) | Class and Object | Class, object, data members and member functions | Defines a Student class with a name, an age and a show() function, then creates an object and fills it with data. It shows that a class is a blueprint and an object is a real instance of it. |
| [06_constructor_and_destructor.cpp](06_constructor_and_destructor.cpp) | Constructor and Destructor | Constructors and destructors | Creates an object whose constructor and destructor each print a message. It shows that the constructor runs automatically when an object is created and the destructor runs when it goes out of scope. |
| [07_static_member.cpp](07_static_member.cpp) | Static Member | Static data member | Counts how many Student objects have been created using a static counter that is increased in the constructor. It shows that a static member belongs to the class and is shared by all objects. |
| [08_inline_and_friend_function.cpp](08_inline_and_friend_function.cpp) | Inline and Friend Function | Inline function and friend function | Reads a private value in two ways: through an inline getter function and through a friend function. It shows that inline functions save call overhead and that a friend function may access private members. |
| [09_smart_agriculture_sensor_monitor.cpp](09_smart_agriculture_sensor_monitor.cpp) | Smart Agriculture Sensor Monitor | Class and object, encapsulation, parameterized constructor, vector of objects | Models soil-moisture sensors as objects that each keep an ID, a reading and a time stamp, stores them in a vector, and updates one reading. It shows encapsulation with private data and that every object has its own state. |
| [10_student_attendance_management_system.cpp](10_student_attendance_management_system.cpp) | Student Attendance Management System | Encapsulation, constructor, member functions | Tracks total and attended classes for each student and calculates the attendance percentage. It shows how a class keeps its data private and exposes behaviour through member functions. |
| [11_ecommerce_product_catalog.cpp](11_ecommerce_product_catalog.cpp) | E-Commerce Product Catalog | Static members, inline functions, constructor and destructor | Keeps a catalog of products and uses a static counter to track how many Product objects exist. It shows static data and function members, inline getters, and a destructor that updates the count. |

## How to Compile and Run

Linux / macOS:
```bash
g++ -std=c++17 filename.cpp -o program
./program
```

Windows (MinGW):
```bash
g++ -std=c++17 filename.cpp -o program.exe
program.exe
```

## Notes

- All programs are self-contained, compilable `.cpp` files verified with `g++ -std=c++17 -Wall`.
- No compiled binaries, output files, or screenshots are included — only source code.
