#include <iostream>
using namespace std;

// School grading if-else
int main() {
  int marks;
  cin >> marks;
  if (marks <= 25) {
    cout << "F" << endl;
  }
  else if (marks > 25 && marks <= 44) {
    cout << "E" << endl;
  }
  else if (marks > 44 && marks <= 49) {
    cout << "D" << endl;
  }
  else if (marks > 49 && marks <= 59) {
    cout << "C" << endl;
  }
  else if (marks > 59 && marks <= 79) {
    cout << "B" << endl;
  }
  else if (marks > 79 && marks <= 100) {
    cout << "A" << endl;
  }
  else {
    cout << "Invalid marks" << endl;
  }
  return 0;
}
