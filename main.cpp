#include <iostream>

int promptForInput() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    return number;
}

void oddOrEven(int number) {
    bool isOdd = (number % 2 != 0);
    bool isEven = (number % 2 == 0);

    if(isOdd) {
        std::cout << "Odd" << std::endl;
    } else if(isEven) {
        std::cout << "Even" << std::endl;
    }
}

int main() {
    oddOrEven(promptForInput());
    
    return 0;}