#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int a, b;
    void setNumbers(int x, int y) {
        a = x;
        b = y;
    }
};

// Derived class
class Derived : public Base {
public:
    int add() {
        return a + b;
    }
    int subtract() {
        return a - b;
    }
};

int main() {
    Derived obj;
    obj.setNumbers(10, 5);
    cout << "Addition: " << obj.add() << endl;
    cout << "Subtraction: " << obj.subtract() << endl;
    return 0;
}