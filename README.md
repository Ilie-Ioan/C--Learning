# C++ Learning and Projects

## Introduction

This repository contains the materials and code from my journey in learning C++, focusing on building a solid understanding of both intermediate and advanced concepts. The course includes hands-on projects to apply the knowledge I've acquired.

Currently, I've covered object-oriented programming concepts like classes, inheritance, polymorphism, and more. Below are the key projects I have implemented as part of my learning.

---

## Current Progress

### Object-Oriented Programming (OOP)
I've learned the core concepts of OOP in C++, such as how to define classes and objects. I now understand how encapsulation helps in keeping data secure and how abstraction simplifies complex systems by hiding unnecessary details.

### Constructors and Operator Overloading
I've covered how to work with constructors, which are essential for object initialization. Operator overloading has allowed me to make custom data types behave like built-in types, enhancing the flexibility of my code.

### Inheritance and Polymorphism
I have explored inheritance to reuse code by creating new classes based on existing ones. I've also implemented polymorphism, which allows objects of different types to be treated through the same interface, making the code more extensible.

### Pointers and Memory Management
I've also learned about pointers and how to use them for dynamic memory allocation, allowing efficient management of resources in C++. Understanding pointers has provided insight into how data is managed at a low level and how to avoid memory leaks using smart pointers.

### Friend Functions and Friend Classes
I've discovered **friend functions** and **friend classes**, which allow external functions or other classes to access the private and protected members of a class, breaking the encapsulation under certain circumstances.

### Static Member Variables and Functions
I've learned about **static member variables and functions**, which are shared by all objects of a class, allowing for shared state or behavior without needing to instantiate the class.

### File Handling
I've discovered **file handling** in C++, learning how to read from and write to files using streams. This will be crucial for building applications that require persistent data storage.

### Exception Handling
I've covered the method of managing errors gracefully during runtime using **exception handling**, ensuring that programs can handle unexpected situations without crashing.

### Standard Template Library (STL)
I've explored the **STL**, which includes powerful collections of data structures and algorithms like **vectors**, **maps**, **sets**, and **iterators**. This will allow me to write efficient and reusable code with minimal effort by leveraging these built-in structures and functions.

### Templates and Generic Programming
I've dived into **templates**, allowing for **generic programming**. Templates enable writing functions and classes that work with any data type, making code more flexible and reusable.

### Lambda Functions
I will explore **lambda expressions**, a feature of C++ that allows for the definition of anonymous functions. This feature makes the code more concise and readable, especially when used in combination with STL algorithms.

### Multi-threading
I've learned the basics of **multi-threading**, which will enable me to write programs that can perform multiple tasks concurrently, improving the performance of complex applications.

### GUI Development with Qt5
Finally, I've started with **GUI development** using **Qt5**, learning to build interactive graphical user interfaces. This will allow me to create user-friendly applications with modern UI elements.

---

## Current Projects I Made

### 1. ATM System

#### Overview
As part of the learning process, I developed a basic **ATM system** that includes the following features:
- **Withdraw Money**: Users can withdraw money from their balance.
- **Check Balance**: Displays the current balance of the user.
- **Change PIN**: Allows users to update their PIN for security purposes.
- **View User Information**: Displays user details such as account number and name.

#### Key Concepts Used
This project allowed me to apply key C++ concepts like class creation, encapsulation, basic file handling, and memory management, providing a real-world use case for my learning.

---

### 2. Student Management System

#### Overview
As part of the learning process, I developed a basic **Student Management System** that includes the following features:
- **Add Student Record**: Users can input student data including admission number, name, gender, class, and marks. This data is saved in a file.
- **View Student Records**: Displays all the student records stored in the system.
- **Delete Student Record**: Deletes a student record by moving it to a "Trash" file, allowing for soft deletion.
- **Retrieve Deleted Records**: Allows the user to view records that have been moved to the "Trash."

#### Key Concepts Used
This project helped me apply several key C++ concepts, including:
- **Class Design and Object-Oriented Programming (OOP)**: Creation of classes with member variables and methods.
- **Encapsulation**: Protecting data by using access specifiers such as `private` and `public`.
- **File Handling**: Reading from and writing to files using input/output streams (`ifstream`, `ofstream`).
- **Binary File Operations**: Storing and retrieving data in binary format.
- **Control Flow**: Using loops and conditionals to handle user input and perform various operations.
- **Dynamic Memory Management**: Managing files and data efficiently during runtime.

---

### 3. Keylogger Program

#### Overview
As part of the learning process, I developed a basic **Keylogger Program** using C++ that includes the following features:
- **Key Logging**: Records and logs every key pressed on the keyboard into a file (`Data.txt`). It captures alphanumeric characters, special keys (like Shift, Caps Lock), and certain control keys (like Arrow keys and Enter).
- **Special Character Handling**: Detects when certain keys are pressed in combination with the Shift key and logs the corresponding symbol (e.g., Shift + 1 logs "!" instead of "1").
- **Stealth Mode**: The console window is hidden using the `ShowWindow()` function, making the program run in the background without user awareness.

#### Key Concepts Used
This project helped me apply several key C++ concepts, including:
- **Windows-Specific Programming**: Interaction with the Windows operating system via the Windows API (`GetAsyncKeyState`, `ShowWindow`, etc.).
- **File Handling**: Writing key logs to a file using output file streams (`ofstream`).
- **Control Flow and Infinite Loops**: Continuously capturing and processing keypress events in real-time.
- **Conditional Statements**: Handling different cases for alphanumeric, control, and special keys with specific conditions.
- **Stealth Operations**: Using system calls to hide the program window from users.

---

### 4. Calculator Application

#### Overview
This is a simple **Calculator Application** created using the **Qt framework** in C++. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The interface consists of a number pad (0-9), arithmetic operation buttons, and control buttons for clearing the input and calculating the result.

#### Features
- **Digit Input (0-9)**: Buttons are available to enter numbers directly into the display.
- **Basic Arithmetic Operations**: You can add (`+`), subtract (`-`), multiply (`*`), and divide (`/`) numbers.
- **Clear Button (`C`)**: Resets the calculator display to start a new operation.
- **Equal Button (`=`)**: Calculates and displays the result of the current operation.

#### Graphical User Interface (GUI)
The calculator features a clean and user-friendly interface:
- **Display**: A large gray display area at the top to show the current input or result.
- **Buttons**:
    - **Digits (0-9)**: White buttons arranged in a grid for number input.
    - **Operations (`+`, `-`, `*`, `/`)**: Yellow buttons on the right side for selecting arithmetic operations.
    - **Clear (`C`)**: A yellow button to reset the display.
    - **Equals (`=`)**: A yellow button to calculate the result of the selected operation.

![Calculator Interface](https://github.com/Ilie-Ioan/C--Learning/blob/main/Projects/Android_Calculator/Calculator_UI.png)

#### Key Concepts Used
- **UI Handling**: The graphical interface and button clicks are handled using Qt's signals and slots mechanism. Each button click updates the display with the corresponding number or operation.
- **Operations**: When an operation (`+`, `-`, `*`, `/`) is selected, the first number is stored in a variable, and the display is cleared. After entering the second number, pressing the `=` button calculates and displays the result.

---

## License

This project is licensed under the MIT License.

### 5.Car Booking System
#### Features

1. **Login System**:
   - Admin login with hardcoded credentials (`admin`/`admin`).
   - If the login is successful, the main menu is displayed.
   
2. **Main Menu**:
   - Options to add new cars to the system.
   - Book a car.
   - Exit the application.
   
3. **Add Car**:
   - Allows the admin to add new car details such as car number, brand, fare, and car type.
   - Supported car types: Mini, Sedan, SUV, and Premium.
   - The car details are saved in `carData.txt`.
   
4. **Book Car**:
   - Users can select a car and input their details (name, age, pickup location, destination, and gender).
   - After booking, the selected car is removed from the available list and the booking information is saved in `bookCarData.txt`.

#### File Structure

- `login.h`, `login.cpp`: Handles the login functionality.
- `mainmenu.h`, `mainmenu.cpp`: Displays the main menu where users can navigate to add cars, book cars, or exit the application.
- `addcar.h`, `addcar.cpp`: Handles adding new cars to the system.
- `book_car.h`, `book_car.cpp`: Manages the car booking process.

#### How to Run

1. **Set Up**:
   - Ensure you have Qt installed on your machine.
   - Clone or download the project.

2. **Compile the Project**:
   - Open the project in Qt Creator.
   - Build and run the application.

3. **Login**:
   - Use the following credentials to log in:
     - Username: `admin`
     - Password: `admin`

4. **Main Menu**:
   - From the main menu, you can either add new cars, book available cars, or exit the system.

5. **Add Car**:
   - Enter the car details (car number, brand, fare) and select a car type.
   - Car data will be saved in `carData.txt`.

6. **Book a Car**:
   - Select a car from the available list, enter your personal details, and confirm the booking.
   - The car will be removed from the list and the booking details will be saved in `bookCarData.txt`.

### Data Storage

- `carData.txt`: Stores details of all available cars.
- `bookCarData.txt`: Stores details of all car bookings.



## Course Reference

The C++ learning journey documented here is based on the **[course on Udemy](https://www.udemy.com/course/master-cpp-byteboard/)**, which offers a comprehensive guide through both intermediate and advanced C++ programming topics, including hands-on projects and real-world application development using C++.
