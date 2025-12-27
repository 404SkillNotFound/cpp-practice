
#include <iostream>

char calculateGrade(double score)
{
    if (score >= 90.0)
        return 'A';
    else if (score >= 80.0)
        return 'B';
    else if (score >= 70.0)
        return 'C';
    else if (score >= 60.0)
        return 'D';
    else
        return 'F';
}

int main()
{
    while (true)
    {
        std::cout << "Enter score (0-100) or -1 to quit: ";
        double score{};
        std::cin >> score;

        if (score == -1)
            break;

        if (score < 0 || score > 100)
        {
            std::cout << "Invalid score. Please try again.\n";
            continue;
        }

        char grade{ calculateGrade(score) };
        std::cout << "Grade: " << grade << '\n';
    }

    return 0;
}