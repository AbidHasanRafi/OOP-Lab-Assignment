#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20;

    cout << "x: " << x << endl;
    cout << "Pointer points to: " << *ptr << endl;

    return 0;
}