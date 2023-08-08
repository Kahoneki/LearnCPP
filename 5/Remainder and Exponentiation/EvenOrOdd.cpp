#include <iostream>

bool isEven(int num);

int main() {
    int num {};
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (isEven(num))
        std::cout << num << " is even";
    else
        std::cout << num << " is odd";
}

bool isEven(int num) {
    return num % 2 == 0;
}
