#include <iostream>

enum class Grade
{
    A,
    B,
    C,
    D,
    F
};

void studentUtilitySystemMenu()
{
    std::cout << "===== Student Utility System =====\n";
    std::cout << "1. Enter Marks\n";
    std::cout << "2. Calculate grade\n";
    std::cout << "3. Check pass/fail\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: (1-4)\n";
}

Grade calculateGrade(int marks)
{
    if (marks >= 90)
        return Grade::A;
    else if (marks >= 75)
        return Grade::B;
    else if (marks >= 60)
        return Grade::C;
    else if (marks >= 40)
        return Grade::D;
    else
        return Grade::F;
}

int main()
{
    int choice{};
    int marks{};
    bool hasMarks{ false };

    do
    {
        studentUtilitySystemMenu();
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                std::cout << "Enter marks: ";
                std::cin >> marks;
                hasMarks = true;
                break;

            case 2:
                if (!hasMarks)
                {
                    std::cout << "Please enter marks first.\n";
                    break;
                }

                {
                    Grade grade{ calculateGrade(marks) };
                    std::cout << "Grade: ";

                    switch (grade)
                    {
                        case Grade::A: std::cout << "A\n"; break;
                        case Grade::B: std::cout << "B\n"; break;
                        case Grade::C: std::cout << "C\n"; break;
                        case Grade::D: std::cout << "D\n"; break;
                        case Grade::F: std::cout << "F\n"; break;
                    }
                }
                break;

            case 3:
                if (!hasMarks)
                {
                    std::cout << "Please enter marks first.\n";
                }
                else if (marks >= 33)
                {
                    std::cout << "PASS\n";
                }
                else
                {
                    std::cout << "FAIL\n";
                }
                break;

            case 4:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid option.\n";
        }

    } while (choice != 4);

    return 0;
}
