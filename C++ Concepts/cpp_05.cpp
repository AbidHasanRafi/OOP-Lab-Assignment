#include <iostream>
using namespace std;

class Math {
public:
    int add(int, int);
    int subtract(int, int);
};

int Math::add(int a, int b) {
    return a + b;
}

int Math::subtract(int a, int b) {
    return a - b;
}

int main() {
    Math m;
    cout << "Sum: " << m.add(10, 5) << endl;
    cout << "Difference: " << m.subtract(10, 5) << endl;
    return 0;
}