#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Default Constructor" << endl;
    }

    MyClass(int a) {
        cout << "Parameterized Constructor with value: " << a << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(10);
    return 0;
}