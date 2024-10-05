# ATM System

This is a console-based **ATM System** implemented in C++ that simulates basic ATM operations. The program interacts with the user to provide functionalities like checking account balance, withdrawing money, viewing user details, and updating the user’s phone number.

## Functionality

### 1. User Authentication

The program prompts the user to log in by entering their account number and PIN. The system checks these credentials against the predefined user data:
- **Account Number**: A unique identifier for the user.
- **PIN**: A security code that must match for the user to proceed.

Upon successful authentication, the user can access various ATM functionalities.

### 2. Check Balance

Once logged in, the user can view their current account balance. The system retrieves and displays the balance, ensuring the user is informed of their available funds.

### 3. Withdraw Money

The program allows the user to withdraw money from their account. The following steps are performed:
- The user enters the amount they wish to withdraw.
- The system checks if the entered amount is valid (greater than zero) and does not exceed the available balance.
- If the amount is valid, the balance is updated, and a message confirming the withdrawal is shown, along with the new balance.
- If the amount is invalid (e.g., exceeds the balance), an error message is displayed.

### 4. View User Information

Users can view their personal information stored in the system:
- **Name**: The user's full name.
- **PIN**: The user's PIN (for display purposes in this simulation).
- **Phone Number**: The user's registered phone number.

### 5. Update Phone Number

The user can update their registered phone number. To do this:
- The user enters their current phone number.
- They are then prompted to provide the new phone number.
- If the old number matches the one on file, the phone number is updated, and a confirmation message is displayed.
- If the entered number does not match, the system notifies the user of the mismatch.

### 6. Exit ATM

The user can exit the ATM system at any time by selecting the appropriate option. This terminates the program and clears any session data.

## Summary

This **ATM System** offers a simple and effective way to simulate ATM operations, including:
- **User authentication** with account number and PIN.
- **Balance inquiry** to check the available funds.
- **Cash withdrawal** with real-time balance updates.
- **Viewing user information** for confirmation and verification.
- **Phone number update** functionality to change the registered contact information.
