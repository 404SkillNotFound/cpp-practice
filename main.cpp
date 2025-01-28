#include <iostream>

using namespace std;
//bubblesort
int* sortarr(int arr[]) {
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<10;i++) {
        for (int j=0;j<n;j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    return arr;

}



int main () {

    int arr[]={1,3,4,5,98,4,7,45,23,56,9};
    sortarr(arr);
    for (int i=0;i<10;i++) {
        cout << arr[i] << " ";
    }
    return 1;

}