#include <iostream>
//This approach is generally preferred over the static variable approach because of Control and Predictability.
// We'll define a symbolic constant with a nice name
constexpr bool g_firstCall { true };

int getInteger(bool bFirstCall)
{
  if (bFirstCall)
  {
    std::cout << "Enter an integer: ";
  }
  else
  {
    std::cout << "Enter another integer: ";
  }

  int i{};
  std::cin >> i;
  return i;
}

int main()
{
  int a{ getInteger(g_firstCall) };  // so that it's clearer what the argument represents here
  int b{ getInteger(!g_firstCall) };

  std::cout << a << " + " << b << " = " << (a + b) << '\n';

  return 0;
}
//Const static local variables are generally okay to use.

//Non-const static local variables should generally be avoided. If you do use them, ensure the variable never needs to be reset, and isn’t used to alter program flow.