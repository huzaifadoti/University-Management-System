University Management System (C++ OOP Project)

Overview
This is a simple University Management System built in C++ using Object-Oriented Programming concepts. The project demonstrates abstraction, inheritance, and runtime polymorphism using abstract classes.

The system manages different types of people in a university such as students, teachers, and staff, each with their own specific data and behavior.

Features
- Add different types of entries (Student, Teacher, Staff)
- Store multiple records using vectors
- Input validation for GPA and salary
- Runtime polymorphism using base class pointers
- Separate handling of each role with specific attributes
- Display all stored records at the end

Concepts Used
- Classes and Objects
- Abstract Classes (Pure Virtual Functions)
- Inheritance (Base and Derived classes)
- Polymorphism (Runtime method overriding)
- Virtual Destructor
- Vectors with Pointers
- Input validation using loops
- Dynamic memory allocation (new and delete)

How It Works
1. User enters number of entries to add.
2. For each entry, user selects type:
   - Student
   - Teacher
   - Staff
3. User enters common details (name and ID).
4. Based on type, additional data is entered:
   - Student → course and GPA
   - Teacher → subject and salary
   - Staff → department and working hours
5. Each object is stored using a base class pointer.
6. All records are displayed at the end.

How to Run
1. Compile the program:
   g++ filename.cpp -o output

2. Run the program:
   ./output

Notes
- GPA must be between 0.0 and 4.0
- Teacher salary must be at least 10000
- Program uses runtime polymorphism for flexibility
- Memory is manually managed using delete

Project Information
This project was originally built in 2025 as part of my learning journey in C++ OOP.  
Uploaded to GitHub in 2026 for portfolio purposes.
