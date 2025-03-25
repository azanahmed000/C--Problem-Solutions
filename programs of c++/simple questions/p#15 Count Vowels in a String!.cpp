/*Count Vowels in a String
Count the number of vowels in a user-provided string using a for loop.
Example: Input: Hello World ? Output: 3 vowels*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;
    char ch;
    // Get the user input string
    cout << "Enter a string: ";
    for(;;) {
    getline(cin, str);
    
    // Loop through each character in the string
    
        if(str ='.')
        break;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }
    
    // Output the result
    cout << "Number of vowels: " << vowelCount << endl;
    
    return 0;
}


