#include <iostream>
using namespace std;
void p_04(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin>>n;
    p_04(n);

}