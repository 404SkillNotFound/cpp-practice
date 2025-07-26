#include <iostream>
using namespace std;

void doPrint() {
  cout << "Hello World!" << endl;  // Definition of user-defined function doPrint()
// doPrint() is the called function in this example
  }
  int main() {
    cout<<"Starting main"<<endl; // Interrupt main() by making a function call to doPrint().  main() is the caller.
    doPrint();
    cout << "Ending main()\n";   // This statement is executed after doPrint() ends

    return 0;

  }