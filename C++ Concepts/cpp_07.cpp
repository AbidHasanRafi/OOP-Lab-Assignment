#include <iostream>
using namespace std;

class Box {
public:
    Box(int l, int w) : length(l), width(w) {}
    friend void displayArea(Box b);

private:
    int length;
    int width;
};

void displayArea(Box b) {
    cout << "Area: " << b.length * b.width << endl;
}

int main() {
    Box b(10, 5);
    displayArea(b);
    return 0;
}