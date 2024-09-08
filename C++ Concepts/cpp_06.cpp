#include <iostream>
using namespace std;

class Display {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Display d;
    d.show(10);
    d.show(15.5);
    d.show("Hello");
    return 0;
}