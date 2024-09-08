#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 5 == 0)
        cout << "Divisible by 5" << endl;
    else
        cout << "Not Divisible by 5" << endl;
    return 0;
}