#include <iostream>
using namespace std;

class Student {
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student roll number: ";
        cin >> rollNumber;
    }

    void display() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber << endl;
    }

private:
    string name;
    int rollNumber;
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}