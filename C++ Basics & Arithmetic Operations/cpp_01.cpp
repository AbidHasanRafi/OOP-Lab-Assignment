#include <iostream>
using namespace std;

int main() {
    string name;
    int sid;
    float cgpa;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter SID: ";
    cin >> sid;
    cout << "Enter CGPA: ";
    cin >> cgpa;

    cout << "Name: " << name << "\nSID: " << sid << "\nCGPA: " << cgpa << endl;
    return 0;
}