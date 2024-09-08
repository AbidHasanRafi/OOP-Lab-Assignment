#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void show() = 0;
};

class Derived : public AbstractBase {
public:
    void show() override {
        cout << "Derived class implementation of abstract method" << endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}