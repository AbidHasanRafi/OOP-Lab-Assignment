#include <iostream>
using namespace std;

class Person {
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }

private:
    string name;
    int age;
};

int main() {
    Person p;
    p.input();
    p.display();
    return 0;
}