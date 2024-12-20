#include <iostream>
#include <fstream>
#include <cmath>
#include <set>
#include <string>

// ANSI escape codes for colors
#define RESET   "\033[0m"   // Reset to default color
#define RED     "\033[31m"  // Red text
#define YELLOW  "\033[33m"  // Yellow text
#define GREEN   "\033[32m"  // Green text

double calculateEntropy(const std::string& password) {
    int length = password.length();
    std::set<char> uniqueChars(password.begin(), password.end());
    int characterSetSize = uniqueChars.size();

    return length * log2(characterSetSize);
}

bool isCommonPassword(const std::string& password, const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open the file at " << filePath << "\n";
        return false; // Handle gracefully or exit
    }

    std::string commonPassword;
    while (std::getline(file, commonPassword)) {
        if (password == commonPassword) {
            return true;
        }
    }

    return false;
}

void evaluatePassword(const std::string& password, const std::string& commonPasswordFile) {
    double entropy = calculateEntropy(password);
    std::cout << "\nPassword Entropy: " << entropy << " bits\n";

    if (isCommonPassword(password, commonPasswordFile)) {
        std::cout << RED << "Warning: Your password is commonly used and weak!\n" << RESET;
    } else {
        std::cout << GREEN << "Good: Your password is not in the common passwords list.\n" << RESET;
    }

    // Password strength evaluation with colors
    if (entropy < 28) {
        std::cout << RED << "Password Strength: Weak\n" << RESET;
    } else if (entropy < 36) {
        std::cout << YELLOW << "Password Strength: Moderate\n" << RESET;
    } else {
        std::cout << GREEN << "Password Strength: Strong\n" << RESET;
    }
    std::cout << "-------------------------------------------------------\n\n";
}

int main() {
    std::string password;
    // Set the file path (adjust accordingly)
    std::string commonPasswordFile = "common_passwords.txt";

    while (true) {
        std::cout << "Enter your password (or type 'exit' to quit): ";
        std::cin >> password;

        if (password == "exit") {
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        }

        evaluatePassword(password, commonPasswordFile);
    }

    return 0;
}
