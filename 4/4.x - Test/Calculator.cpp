#include <iostream>

double CalculateValue(double num1, double num2, char operation);

int main() {
    
    double num1 {};
    double num2 {};

    std::cout << "Enter a double value: ";
    std::cin >> num1;

    std::cout << "Enter a double value: ";
    std::cin >> num2;

    char operation {};
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> operation;

    double value {CalculateValue(num1, num2, operation)};
    std::cout << num1 << operation << num2 << " is " << value << '\n';

    return 0;
}


double CalculateValue(double num1, double num2, char operation) {
    if (operation == '+')
        return num1 + num2;
    else if (operation == '-')
        return num1 - num2;
    else if (operation == '*')
        return num1 * num2;
    else
        return num1 / num2;
}
