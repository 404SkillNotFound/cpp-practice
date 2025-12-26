#include <iostream>

int main() {
    std::cout << "Enter a number (1-3): ";
    int x{};
    std::cin >> x;


    if (x > 3) {
        std::cout << "That number is too high!\n";
    }
    else if (x < 1) {
        std::cout << "That number is too low!\n";
    }
    else {
        std::cout << "You entered a valid number.\n";


        switch (x) {
            case 1:
                std::cout << "You chose Option One.\n";
            break;
            case 2:
                std::cout << "You chose Option Two.\n";
            break;
            case 3:
                std::cout << "You chose Option Three.\n";
            break;
            default:

                    std::cout << "Unknown option.\n";
            break;
        }
    }

    return 0;
}