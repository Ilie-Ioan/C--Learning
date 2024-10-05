# Student Management System

This is a simple **Student Management System** program written in C++. It allows users to manage student records by adding, viewing, deleting, and retrieving deleted records.

## Features

- **Add Student Record**: Adds a student's data (Admission Number, Name, Gender, Class, Marks, and Percentage) to a file.
- **View Student Record**: Displays all stored student data from the file.
- **Delete Student Record**: Deletes a student's record based on the Admission Number and stores the deleted record in a Trash file.
- **Retrieve Deleted Records**: Displays the deleted records from the Trash file.

## Requirements

- A C++ compiler (e.g., GCC, MSVC)
- Basic knowledge of how to run C++ programs in your environment (e.g., via terminal/command prompt or an IDE)

## Files

- **`main.cpp`**: Contains the source code for the program.
- **`Stu.txt`**: The file where the student records are stored.
- **`Trash.txt`**: The file where deleted student records are stored.

## How to Run

1. **Clone or Download** the repository.
2. **Compile the Code** using a C++ compiler. Example with `g++`:

    ```bash
    g++ -o student_management main.cpp
    ```

3. **Run the Program**:

    ```bash
    ./student_management
    ```

4. Follow the on-screen menu to perform the desired operations:

    ```
    **************STUDENT MANAGEMENT SYSTEM***************
    1. Write Student Record
    2. Read Student Record
    3. Delete Student Record
    4. Get Deleted Records
    0. Exit
    ```

## Code Overview

The program uses a `Student` class to represent student data. The following methods and functions are used:

- **Student Class**:
  - `getData()`: Captures the student's data from user input.
  - `showData()`: Displays the student's data on the console.
  - `getAdmno()`: Returns the student's admission number.

- **Functions**:
  - `addData()`: Adds a student's data to the `Stu.txt` file.
  - `displayData()`: Displays all the records from the `Stu.txt` file.
  - `deleteData()`: Deletes a record by admission number and moves it to `Trash.txt`.
  - `getTrash()`: Displays the records from the `Trash.txt` file.

## Example

When you run the program, the following operations can be performed:

1. Add a new student:
   - Enter the Admission No., Name, Gender, Class, and Marks.
   - The student's percentage will be calculated automatically.

2. View all student records:
   - All the student details stored in `Stu.txt` will be displayed.

3. Delete a student record:
   - Enter the Admission No. of the student to delete. The record will be moved to `Trash.txt`.

4. Retrieve and display deleted records:
   - All the records in `Trash.txt` will be displayed.


