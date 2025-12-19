#include <iostream>
#include <utility> // Required header for std::swap

int main() {
    std::cout << "Enter an integer: ";
    int smallerValue { };
    std::cin >> smallerValue;

    std::cout << "Enter a larger value: ";
    int largerValue { };
    std::cin >> largerValue;


    if (smallerValue > largerValue) {
        std::cout << "Swapping the values...\n";

        // This replaces the 3 lines of manual temp logic
        std::swap(smallerValue, largerValue);
    }

    std::cout << "The smaller value is: " << smallerValue << '\n';
    std::cout << "The larger value is: " << largerValue << '\n';

    return 0;
}