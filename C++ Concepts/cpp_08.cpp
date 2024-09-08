#include <iostream>
using namespace std;

class MyClass {
public:
    int publicVar;
    void publicMethod() {
        cout << "Public Method" << endl;
    }

private:
    int privateVar;
    void privateMethod() {
        cout << "Private Method" << endl;
    }

protected:
    int protectedVar;
    void protectedMethod() {
        cout << "Protected Method" << endl;
    }
};

int main() {
    MyClass obj;
    obj.publicVar = 10;
    obj.publicMethod();

    return 0;
}