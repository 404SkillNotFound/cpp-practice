//Chapter 5


#include <iostream>
#include <string>
#include <string_view> // Required for the viewer

// FIX 1: Added std::string_view 'n' to accept the name efficiently
void checkEntry(std::string_view n, int a)
{
    // Constant is perfect
    constexpr int MIN_AGE { 21 }; 
  
    // FIX 2: Used the constant 'MIN_AGE' instead of the magic number 21
    if (a < MIN_AGE)
    {
        std::cout << "\n[!] STOP. " << n << " is underage.\n";
        std::cout << "Required: " << MIN_AGE << " | Actual: " << a << "\n";
        std::cout << "You are underage kid, GET LOST!\n";
    }
    else
    {
        // FIX 3: We can use 'n' (the name) here to make it personal
        std::cout << "\n[+] Access Granted. Welcome, " << n << ".\n";
        std::cout << "Name Length verified: " << n.length() << " chars.\n"; 
        std::cout << "You can go in sire, right from here.\n";
    } 
}

int main()
{
    std::cout << "Welcome, sir. Please enter your full name: \n";
  
    std::string name{};
    std::getline(std::cin >> std::ws, name); // Perfect input handling

    std::cout << "Enter your age: \n";
    int age {};
    std::cin >> age;
  
    // FIX 4: Passed both 'name' AND 'age' to match the function above
    checkEntry(name, age);
  
    return 0;
}