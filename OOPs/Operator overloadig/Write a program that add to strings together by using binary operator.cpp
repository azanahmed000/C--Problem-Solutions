/*Write a program that add to strings together by using binary operator
*/
#include <iostream>
#include <cstring> // For strcpy and strcat
using namespace std;

class str {
private:
    char data[40]; // Increased size to handle longer concatenated strings
public:
    // Default constructor initializes the string to empty
    str() {
        data[0] = '\0';
    }

    // Method to take input
    void in() {
        cout << "Enter string: ";
        cin.getline(data, 40); // Use cin.getline for safe input
    }

    // Method to display the string
    void show() const {
        cout << data << endl;
    }

    // Overloaded + operator for concatenation
    str operator+(const str& s) {
        str temp;
        strcpy(temp.data, data);   // Copy current string
        strcat(temp.data, s.data); // Concatenate with the second string
        return temp;
    }
};

int main() {
    str s1, s2, s3;

    s1.in(); // Input first string
    s2.in(); // Input second string

    cout << "s1 = ";
    s1.show(); // Show first string
    cout << "s2 = ";
    s2.show(); // Show second string

    cout << "Concatenating s1 and s2..." << endl;
    s3 = s1 + s2; // Concatenate using overloaded operator

    cout << "s3 = ";
    s3.show(); // Show the concatenated result

    return 0;
}

