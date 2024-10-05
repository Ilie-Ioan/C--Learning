# Student Management System

This **Student Management System** is a console-based C++ application that enables users to manage student records efficiently. It utilizes basic file handling techniques to store, retrieve, delete, and recover student information.

## Functionality

### 1. Add Student Record

The program allows users to add student information to a file (`Stu.txt`). For each student, the following details are requested:

- Admission Number
- Full Name
- Gender (M/F)
- Class
- Total Marks (out of 500)

The program then automatically calculates the percentage based on the total marks and stores all the information in a binary file. This ensures that the records are stored permanently, even when the program is closed.

### 2. View Student Records

Users can view all the student records stored in the `Stu.txt` file. The program reads the file and displays the details of each student, including:

- Admission Number
- Full Name
- Gender
- Class
- Total Marks
- Percentage

This functionality provides an easy way to access all the student data at any time.

### 3. Delete Student Record

This feature allows users to delete a student record by providing the student’s Admission Number. Upon deletion:

- The student record is moved from `Stu.txt` to a separate file called `Trash.txt`.
- The deleted record can be recovered later, if needed.
- This process ensures that the record is not permanently erased but stored in a "Trash" file for possible future retrieval.

### 4. Retrieve Deleted Records

Deleted student records are stored in `Trash.txt`. This functionality allows users to view all the records that have been previously deleted. It provides:

- Access to all deleted records.
- The ability to review and manage records before deciding on any further actions, such as permanent deletion or manual recovery.

### 5. Exit

The user can choose to exit the system at any time. The program ensures that all operations performed (add, delete, view) are saved and reflected in the files before exiting.

## File Management

The program uses two primary files for handling student data:

- **Stu.txt**: This file stores active student records.
- **Trash.txt**: This file temporarily stores deleted records, providing a way to restore or manage them later.

Both files are managed in binary format to efficiently store and handle structured data such as student information.

## Summary

The **Student Management System** provides a straightforward approach to managing student data. It allows users to:

- Add new student records.
- View all active student records.
- Delete student records while preserving them in a trash system.
- Retrieve and display deleted student records.

This makes it a practical tool for managing student data with basic operations like data entry, deletion, and recovery, all implemented through simple file handling mechanisms.
