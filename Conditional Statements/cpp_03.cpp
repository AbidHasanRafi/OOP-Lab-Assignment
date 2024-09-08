#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    bool isPrime = true;

    if (num <= 1)
        isPrime = false;
    else {
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}