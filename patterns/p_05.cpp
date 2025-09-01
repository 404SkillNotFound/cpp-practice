#include <iostream>
using namespace std;
void p_05(int n) {
    for (int i = 0; i < n; i++) {
        for (int j =0; j< n-i;  j++) {
            cout <<"* ";
        }
        cout << endl;
    }
}


int main() {
    int n;
    cin>>n;
    p_05(n);

}