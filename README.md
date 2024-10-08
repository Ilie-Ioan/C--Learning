# C++ Learning and projects

## Introduction

This repository contains the materials and code from my journey in learning C++, focusing on building a solid understanding of both intermediate and advanced concepts. The course includes hands-on projects to apply the knowledge I've acquired.

Currently, I've covered object-oriented programming concepts like classes, inheritance, polymorphism, and more. The primary project implemented so far is an ATM system that incorporates key concepts from these sections.

## Current Progress

### Object-Oriented programming (OOP)
I've learned the core concepts of OOP in C++, such as how to define classes and objects. I now understand how encapsulation helps in keeping data secure and how abstraction simplifies complex systems by hiding unnecessary details.

### Constructors and operator overloading
I've covered how to work with constructors, which are essential for object initialization. Operator overloading has allowed me to make custom data types behave like built-in types, enhancing the flexibility of my code.

### Inheritance and polymorphism
I have explored inheritance to reuse code by creating new classes based on existing ones. I've also implemented polymorphism, which allows objects of different types to be treated through the same interface, making the code more extensible.

### Pointers and memory management
I've also learned about pointers and how to use them for dynamic memory allocation, allowing efficient management of resources in C++. Understanding pointers has provided insight into how data is managed at a low level and how to avoid memory leaks using smart pointers.

### Friend functions and friend class
I've  discovered **friend functions** and **friend classes**, which allow external functions or other classes to access the private and protected members of a class, breaking the encapsulation under certain circumstances.

### Static member variables and functions
I've learned about **static member variables and functions**, which are shared by all objects of a class, allowing for shared state or behavior without needing to instantiate the class.

### File Handling
I've discoverd into **file handling** in C++, learning how to read from and write to files using streams. This will be crucial for building applications that require persistent data storage.

### Exception handling
I've covered  the method of managing errors gracefully during runtime using **exception handling**, ensuring that programs can handle unexpected situations without crashing.

### Standard Template Library (STL)
I've explored the **STL**, which includes powerful collections of data structures and algorithms like **vectors**, **maps**, **sets**, and **iterators**. This will allow me to write efficient and reusable code with minimal effort by leveraging these built-in structures and functions.

### Templates and generic Programming
I've dived into **templates**, allowing for **generic programming**. Templates enable writing functions and classes that work with any data type, making code more flexible and reusable.

### Lambda functions
I will explore **lambda expressions**, a feature of C++ that allows for the definition of anonymous functions. This feature makes the code more concise and readable, especially when used in combination with STL algorithms.

### Multi-threading
I've learned the basics of **multi-threading**, which will enable me to write programs that can perform multiple tasks concurrently, improving the performance of complex applications.

### GUI Development with Qt5
Finally, I've  started with **GUI development** using **Qt5**, learning to build interactive graphical user interfaces. This will allow me to create user-friendly applications with modern UI elements.

# Current projects i made:
### ATM pystem project
As part of the learning process, I developed a basic **ATM system** that includes the following features:
- **Withdraw Money**: Users can withdraw money from their balance.
- **Check Balance**: Displays the current balance of the user.
- **Change PIN**: Allows users to update their PIN for security purposes.
- **View User Information**: Displays user details such as account number and name.

This project allowed me to apply key C++ concepts like class creation, encapsulation, basic file handling, and memory management, providing a real-world use case for my learning.

### Student management system

As part of the learning process, I developed a basic **Student Management System** that includes the following features:

- **Add Student Record**: Users can input student data including admission number, name, gender, class, and marks. This data is saved in a file.
- **View Student Records**: Displays all the student records stored in the system.
- **Delete Student Record**: Deletes a student record by moving it to a "Trash" file, allowing for soft deletion.
- **Retrieve Deleted Records**: Allows the user to view records that have been moved to the "Trash."

This project helped me apply several key C++ concepts, including:
- **Class Design and Object-Oriented Programming (OOP)**: Creation of classes with member variables and methods.
- **Encapsulation**: Protecting data by using access specifiers such as `private` and `public`.
- **File Handling**: Reading from and writing to files using input/output streams (`ifstream`, `ofstream`).
- **Binary File Operations**: Storing and retrieving data in binary format.
- **Control Flow**: Using loops and conditionals to handle user input and perform various operations.
- **Dynamic Memory Management**: Managing files and data efficiently during runtime.

These concepts are fundamental for building real-world applications that deal with persistent data storage.

### Keylogger krogram

As part of the learning process, I developed a basic **Keylogger Program** using C++ that includes the following features:

- **Key Logging**: Records and logs every key pressed on the keyboard into a file (`Data.txt`). It captures alphanumeric characters, special keys (like Shift, Caps Lock), and certain control keys (like Arrow keys and Enter).
- **Special Character Handling**: Detects when certain keys are pressed in combination with the Shift key and logs the corresponding symbol (e.g., Shift + 1 logs "!" instead of "1").
- **Stealth Mode**: The console window is hidden using the `ShowWindow()` function, making the program run in the background without user awareness.

### Key Concepts Used

This project helped me apply several key C++ concepts, including:

- **Windows-Specific Programming**: Interaction with the Windows operating system via the Windows API (`GetAsyncKeyState`, `ShowWindow`, etc.).
- **File Handling**: Writing key logs to a file using output file streams (`ofstream`).
- **Control Flow and Infinite Loops**: Continuously capturing and processing keypress events in real-time.
- **Conditional Statements**: Handling different cases for alphanumeric, control, and special keys with specific conditions.
- **Stealth Operations**: Using system calls to hide the program window from users.

These concepts are crucial for developing low-level programs that interact directly with the operating system.

## Upcoming Concepts

In the next stages, I will be learning the following intermediate and advanced C++ topics:

## Future Projects

In addition to the ATM system, Student Management System and Keylogger Program the following projects will be implemented as I progress further in the course:

- **Mobile Phone Type Calculator**: A GUI-based calculator developed using **Qt5** and C++, simulating a mobile phone interface.
  
- **Car Booking System**: A GUI-based car booking application built with **Qt5**. This project will involve managing car availability, allowing users to select and book cars through an intuitive interface.



## Course Reference

The C++ learning journey documented here is based on the **[course on Udemy](https://www.udemy.com/course/master-cpp-byteboard/)**, which offers a comprehensive guide through both intermediate and advanced C++ programming topics, including hands-on projects and real-world application development using C++.
