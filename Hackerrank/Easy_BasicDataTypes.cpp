#include <iostream>
#include <iomanip> // Header needed for setprecision and fixed
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    cin >> i >> l >> c >> f >> d;

    cout << i << endl;
    cout << l << endl;
    cout << c << endl;


    cout << fixed << setprecision(3) << f << endl;

   // With fixed: setprecision(n) sets the number of digits after the decimal point.
    cout <<fixed<< setprecision(9) << d << endl;

    return 0;
}