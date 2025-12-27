#include <iostream>
#include <random>
#include <limits>

int getIntegerInput()
{
    while (true)
    {
        std::cout << "Enter a guess (1-100): ";
        int x{};
        std::cin >> x;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number.\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return x;
        }
    }
}

int main()
{
    std::mt19937 mt{ std::random_device{}() };
    std::uniform_int_distribution die{ 1, 100 };

    int target{ die(mt) };
    int attempts{ 0 };

    std::cout << "=== Hi-Lo Game ===\n";

    while (true)
    {
        ++attempts;
        int guess{ getIntegerInput() };

        if (guess > target)
            std::cout << "Too high!\n";
        else if (guess < target)
            std::cout << "Too low!\n";
        else
        {
            std::cout << "Correct! You won in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}