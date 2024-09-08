#include <iostream>
using namespace std;

class Arithmetic {
public:
    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void add() {
        cout << "Sum: " << x + y << endl;
    }

    void subtract() {
        cout << "Difference: " << x - y << endl;
    }

    void multiply() {
        cout << "Product: " << x * y << endl;
    }

    void divide() {
        if (y != 0)
            cout << "Quotient: " << x / y << endl;
        else
            cout << "Division by zero error" << endl;
    }

private:
    int x, y;
};

int main() {
    Arithmetic a;
    a.setValues(10, 5);
    a.add();
    a.subtract();
    a.multiply();
    a.divide();
    return 0;
}