/*Write a program that add to strings together by using binary operator '=='
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
    int operator ==(const str& s) {
        if(strlen(s.data)==strlen(data))
        return 1;
        else 
        return 0;
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
	if(s1==s2)
    cout << "Both strings are of equal length ." << endl;
	else
	cout<<"Both strings are of different length ."<<endl;    

    return 0;
}

