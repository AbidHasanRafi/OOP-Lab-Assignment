#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Even numbers: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}