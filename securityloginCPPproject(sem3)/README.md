# Security Login System

This C++ project implements a simple security login system that includes user registration, login, password change, and password recovery functionalities. The system securely handles user passwords by masking the input and storing user details in separate files.

## Features

1. **User Registration**
   - Users can register by providing a username, password, age, and an answer to a selected security question.
   
2. **User Login**
   - Registered users can log in by entering their username and password.
   
3. **Change Password**
   - Users can change their password by providing their username and current password.
   
4. **Forgot Password**
   - Users can reset their password by answering their security question correctly.

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)
- Standard C++ libraries

### Installation

1. Clone the repository or download the source code.
2. Compile the code using a C++ compiler:
   ```bash
   g++ -o SecuritySystem SecuritySystem.cpp
   ```
3. Run the compiled program:
   ```bash
   ./SecuritySystem
   ```

## Usage

Upon running the program, you will be presented with the following menu:

```
   Security System
____________________________________

|            1. Register            |
|            2. Login               |
|        3. Change Password         |
|        4. Forgot Password         |
|__________5. End Program___________|
```

### 1. Register

- Enter your desired username, password, age, and answer to a security question.

### 2. Login

- Enter your username and password to log in.

### 3. Change Password

- Enter your username and current password.
- Provide a new password and confirm it to change your password.

### 4. Forgot Password

- Enter your username.
- Answer the security question correctly to reset your password.

### 5. End Program

- Exit the program.

## Code Explanation

### Main Functions

- `registration()`: Handles user registration by collecting user details and saving them in a file.
- `login()`: Verifies user credentials and logs in the user if correct.
- `changepassword()`: Allows users to change their password by verifying their current password.
- `forgotpassword()`: Resets the user's password by verifying the answer to their security question.

### Helper Function

- `takePasswdFromUser(char sp = '*')`: Reads the password input from the user while masking the characters with a specified symbol.

### Main Function

The main function displays the menu and calls the corresponding functions based on the user's choice:

```cpp
int main()
{
    int a;
    cout << "\t   Security System" << endl;
    cout << "____________________________________" << endl << endl;
    cout << "|            1. Register            |" << endl;
    cout << "|            2. Login               |" << endl;
    cout << "|        3. Change Password         |" << endl;
    cout << "|        4. Forgot Password         |" << endl;
    cout << "|__________5. End Program___________|" << endl << endl;
    do
    {
        cout << endl << endl;
        cout << "Enter Your Choice:- ";
        cin >> a;
        switch (a)
        {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            changepassword();
            break;
        case 4:
            forgotpassword();
            break;
        case 5:
            cout << "_____________Thank You_______________" << endl;
            break;
        default:
            cout << "Enter a valid choice";
        }
    } while (a != 5);
    return 0;
}
```

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or bug fixes.

## License

This project is open-source and available under the MIT License.

---