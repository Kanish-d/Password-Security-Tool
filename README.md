# Password Security Tool

A simple yet effective C++ console application designed to evaluate password strength. This tool helps users ensure their passwords are secure by calculating entropy and detecting common passwords. It provides color-coded feedback for easy interpretation of password strength levels.

---

## Features

- **Entropy Calculation**: Determines the randomness of your password using entropy values.
- **Common Password Detection**: Flags passwords found in a predefined list of commonly used passwords.
- **Color-Coded Feedback**: Provides real-time feedback with colored text for weak, moderate, and strong passwords.
- **Continuous Usage**: Allows users to evaluate multiple passwords in a single session.

---

## Files in the Repository

1. **`main.cpp`**: The source code for the Password Security Tool.
2. **`PasswordSecurityTool.cbp`**: The Code::Blocks project file for easy setup in the Code::Blocks IDE.
3. **`common_passwords.txt`**: A text file containing a list of commonly used passwords for detection.
4. **`README.md`**: Documentation explaining the project and how to use it.

---

## How to Set Up and Run the Project

### Prerequisites
1. **C++ Compiler**: Ensure you have a C++ compiler installed (e.g., GCC or the compiler included with Code::Blocks).
2. **Code::Blocks IDE** (Optional): Download and install the [Code::Blocks IDE](http://www.codeblocks.org/).
3. **Download the Files**:
   - Clone the repository using Git:
     ```bash
     git clone https://github.com/Kanish-d/Password-Security-Tool.git
     ```
   - Alternatively, download the repository as a ZIP file and extract it.

---

### Steps to Run
1. Open the project:
   - Launch Code::Blocks.
   - Open the `PasswordSecurityTool.cbp` project file.

2. Verify the `common_passwords.txt` file path:
   - Ensure the `common_passwords.txt` file is in the same directory as the executable or adjust the file path in the code if needed.

3. Build and Run:
   - In Code::Blocks, click **Build** > **Build and Run**.
   - Enter passwords when prompted to evaluate their strength.

4. Command Line (Alternative):
   - Navigate to the folder containing the `main.cpp` file.
   - Compile the program using a terminal or command prompt:
     ```bash
     g++ main.cpp -o PasswordSecurityTool
     ```
   - Run the program:
     ```bash
     ./PasswordSecurityTool
     ```

---

## How to Use
1. Launch the application.
2. Enter a password when prompted.
3. View the feedback on your password's entropy, strength, and whether it's a common password.
4. Repeat as needed or type `exit` to close the program.

---

## Sample Output
```bash
Enter your password (or type 'exit' to quit): mypassword123
Password Entropy: 47.6 bits
Warning: Your password is commonly used and weak!
Password Strength: Weak
------------------------------------
Enter your password (or type 'exit' to quit):
```

---

## License

This project is open-source and available under the [MIT License](LICENSE). You are free to use, modify, and distribute it as per the terms of the license.

---

## Contributing

Contributions are welcome! If you have suggestions or improvements, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix:
   ```bash
   git checkout -b feature-name
   ```
3. Commit your changes:
   ```bash
   git commit -m "Add a new feature"
   ```
4. Push your branch:
   ```bash
   git push origin feature-name
   ```
5. Open a pull request for review.
