#include <iostream>

int main() {
    // Variables to hold user input
    double num1, num2;
    char operation;

    // Display instructions
    std::cout << "Simple Calculator" << std::endl;
    std::cout << "Enter first Digit: ";
    std::cin >> num1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second Digit: ";
    std::cin >> num2;

    // Perform calculation based on the chosen operator
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
    }

    return 0;
}
