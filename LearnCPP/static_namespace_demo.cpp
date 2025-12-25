#include <iostream>

// 1. Namespace Application: Organizing global constants to prevent naming conflicts
namespace Physics {
  const double GRAVITY = 9.81;
}

void trackUsage() {
  // 2. Static Application: 'callCount' retains its value between function calls
  // It is initialized only once, not every time the function runs.
  static int callCount = 0;
  callCount++;
  std::cout << "Function called " << callCount << " times.\n";
}

int main() {
  // Accessing the namespace constant
  std::cout << "Gravity: " << Physics::GRAVITY << " m/s^2\n";

  // Demonstrating static variable persistence
  trackUsage(); // Output: 1
  trackUsage(); // Output: 2
  trackUsage(); // Output: 3

  return 0;
}