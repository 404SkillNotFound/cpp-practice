#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x { 2 };



    int first_arg = x++;  // first_arg gets 2, x becomes 3
    int second_arg = x--; // second_arg gets 3, x becomes 2


    int value = add(first_arg, second_arg);

    std::cout << "Value: " << value << "\n"; // Always prints 5
    std::cout << "Final x: " << x << "\n";   // Always prints 2

    return 0;
}