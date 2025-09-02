#include <iostream>
using namespace std;

void p_10(int n) {
    // Loop through each row of the diamond (total height is 2*n - 1)
    for (int i = 1; i <= 2 * n - 1; i++) {

        // Calculate the number of stars for the current row
        int stars = i;              // Assume it's the top half (stars = row number)
        if (i > n) stars = 2 * n - i; // If it's the bottom half, recalculate stars to decrease

        // Calculate the number of spaces needed to center the pattern
        int spaces = n - stars;     // The total width is n, so spaces fill the rest

        // Loop to print the leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Loop to print the stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Move to the next line after the row is printed
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p_10(n);
    return 0;
}
