#include <iostream>
using namespace std;

// Top pyramid (p_07)
void p_07(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Bottom pyramid (p_08)
void p_08(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < 2 * n - 2 * i - 1; j++) {
            cout << "*";
        }

        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p_07(n);
    p_08(n);
}