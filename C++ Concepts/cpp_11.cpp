#include <iostream>
using namespace std;

class Base {
public:
    void baseMethod() {
        cout << "Base class method" << endl;
    }
};

class Derived : public Base {
public:
    void derivedMethod() {
        cout << "Derived class method" << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void protectedDerivedMethod() {
        cout << "Protected Derived class method" << endl;
    }
};

class PrivateDerived : private Base {
public:
    void privateDerivedMethod() {
        cout << "Private Derived class method" << endl;
    }
};

int main() {
    Derived d;
    d.baseMethod();
    d.derivedMethod();

    ProtectedDerived pd;
    pd.protectedDerivedMethod();

    PrivateDerived pvt;
    pvt.privateDerivedMethod();

    return 0;
}