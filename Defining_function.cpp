/*
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

  } */
/* In the following program, function main() calls function doA(), which calls function doB():
#include <iostream> // for std::cout

void doB()
{
  std::cout << "In doB()\n";
}


void doA()
{
  std::cout << "Starting doA()\n";

  doB();

  std::cout << "Ending doA()\n";
}

// Definition of function main()
int main()
{
  std::cout << "Starting main()\n";

  doA();

  std::cout << "Ending main()\n";

  return 0;
} */

/*#include <iostream>
using namespace std;

int main() {
  cout<<"Enter a number:"<<endl;
  int num{};
  cin>>num;

  cout<<"the double of "<<num<<" is:"<<num*2<<endl;
}*/


