#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    if (x > 0)
        std::cout << "Positive\n";
    else if (x < 0)
        std::cout << "Negative\n";
    else
        std::cout << "Zero\n";

    int count{0};
    while (count < 3)
    {
        std::cout << "Count: " << count << '\n';
        ++count;
    }

    return 0;
}
