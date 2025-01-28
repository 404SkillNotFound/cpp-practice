//bubblesort algorithm

#include <iostream>

using namespace std;
// Bubble Sort

int main () {

    int arr[] = {1, 3, 4, 5, 98, 4, 7, 45, 23, 56, 9};
    int n = sizeof(arr)/sizeof(arr[0]);  // Size of the array

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++) {  // Outer loop for n-1 passes
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop to compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
