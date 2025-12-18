#include <iostream>
#include <cmath>    // for std::fmod
#include <string>
#include <iomanip>  // for std::setprecision

bool isNearlyEqual(double a, double b) {
    const double epsilon { 0.0001 };
    return std::abs(a - b) < epsilon;
}

int main() {
    double pricePerItem { 3.75 };
    int quantity { 4 };
    int inventory { 100 };
    bool isVIP { true };
    double targetPrice { 13.5 };

    double totalCost { pricePerItem * quantity };


    if (isVIP && (quantity > 3 || totalCost > 10.0)) {
        totalCost *= 0.9; // Compound assignment: Multiply by 0.9
    }


    std::string shipping { (totalCost > 20.0) ? "Express" : "Standard" };




    std::cout << "--- Smart Vending Machine Initialized ---\n";


    std::cout << "Remaining stock: " << (inventory -= quantity) << " units\n";


    std::cout << "Verifying transaction... ";
    if (isNearlyEqual(totalCost, targetPrice)) {
        std::cout << "MATCH SUCCESSFUL\n";
    } else {
        std::cout << "MATCH FAILED\n";
    }

    std::cout << "\n--- Receipt ---\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Final price: $" << totalCost << '\n';
    std::cout << "Shipping:    " << shipping << '\n';

    return 0;
}