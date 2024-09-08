#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero!";
        }
        cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}