#include <iostream>

int main()
{
    int firstNumber, secondNumber;
    std::cout << "Please enter a big number: ";
    std::cin >> firstNumber;
    std::cout << "Please enter a smaller number: ";
    std::cin >> secondNumber;

    if (firstNumber > secondNumber)
        std::cout << "\nThanks!\n";
    else
        std::cout << "\nOops. The second is bigger.\n";

    return 0;
}