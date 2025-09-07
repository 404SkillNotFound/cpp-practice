//Return the array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) // A loop to read n numbers into an array
    cin>>arr[i];
  for (int i = 0; i < n; i++) { //extra step (only to test how to print user input array)
    cout << arr[i] << " ";

  } cout<<endl;

  for(int j=n-1;j>=0;j--)
    cout<<arr[j]<<" ";
  cout<<endl;




    return 0;
}
