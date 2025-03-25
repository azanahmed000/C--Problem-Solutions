/*Write a class Array that contains  an array of integers as data memeber.

The class conatins  the following member function :

- A constructor that initializes  the array elements to -1.
- Input function to input the values the array.
- Show function to display the values of the array .
- Overload == operator to compare the values of two objects .
  The overloaded function returns 
  1 if all values of both objects are same and returns 0 otherwise.
*/
#include <iostream>
using namespace std;

class Array {
    int arr[10];

public:
    Array() { for (int &x : arr) x = -1; }

    void input() { for (int &x : arr) cin >> x; }

    void show() const { for (int x : arr) cout << x << " "; cout << endl; }

    bool operator==(const Array &other) const {
        for (int i = 0; i < 10; i++) if (arr[i] != other.arr[i]) return false;
        return true;
    }
};

int main() {
    Array a1, a2;

    a1.input();
    a2.input();

    a1.show();
    a2.show();

    cout << (a1 == a2 ? "Both arrays are equal.\n" : "Both arrays are not equal.\n");

    return 0;
}

