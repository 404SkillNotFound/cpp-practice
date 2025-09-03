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

/*
 ====================================================================
 NOTE: I FACED DIFFICULTY UNDERSTANDING THE LOGIC FOR THIS PATTERN
 ====================================================================

 This code prints a diamond shape using a single 'for' loop, which can be confusing.
 Here's a breakdown of the core logic for n = 4:

 1. THE MAIN LOOP:
    - The loop `for (int i = 1; i <= 2 * n - 1; i++)` runs for the total height of the diamond.
    - For n=4, the loop runs from i=1 to 7. The middle row is when i=n (i=4).

 2. THE STAR CALCULATION (The Main Trick):
    - `int stars = i;`
      This line handles the TOP HALF of the diamond, where the number of stars is equal
      to the current row number.
      - i=1, stars=1
      - i=2, stars=2
      - i=3, stars=3
      - i=4, stars=4

    - `if (i > n) stars = 2 * n - i;`
      This line handles the BOTTOM HALF. When the row number 'i' goes past the middle 'n',
      it recalculates the number of stars to make them decrease.
      For n=4, 2*n = 8.
      - i=5, stars = 8 - 5 = 3
      - i=6, stars = 8 - 6 = 2
      - i=7, stars = 8 - 7 = 1

 3. THE SPACE CALCULATION:
    - `int spaces = n - stars;`
      This simple formula centers the pattern. The widest part of the diamond has 'n' stars
      and 0 spaces. Every other row calculates how many spaces are needed to fill the gap.
      - When stars=1, spaces = 4 - 1 = 3
      - When stars=4, spaces = 4 - 4 = 0
*/
