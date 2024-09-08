#include <iostream>
using namespace std;

class Student {
public:
    void inputGrades() {
        cout << "Enter the number of subjects: ";
        int numSubjects;
        cin >> numSubjects;
        grades = new float[numSubjects];
        totalSubjects = numSubjects;
        float total = 0;
        for (int i = 0; i < numSubjects; ++i) {
            cout << "Enter grade for subject " << i + 1 << ": ";
            cin >> grades[i];
            total += grades[i];
        }
        cgpa = total / numSubjects;
    }

    void displayCGPA() {
        cout << "CGPA: " << cgpa << endl;
    }

    ~Student() {
        delete[] grades;
    }

private:
    float *grades;
    int totalSubjects;
    float cgpa;
};

int main() {
    Student s;
    s.inputGrades();
    s.displayCGPA();
    return 0;
}