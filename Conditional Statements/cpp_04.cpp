#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18)
        cout << "Eligible to Vote" << endl;
    else
        cout << "Not Eligible to Vote" << endl;
    return 0;
}