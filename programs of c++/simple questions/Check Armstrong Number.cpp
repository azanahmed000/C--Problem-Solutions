#include <iostream>
#include <cmath> // For pow function
using namespace std;

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Store the original number for comparison later
    originalNum = num;

    // Find the number of digits in the number using a for loop
    int digits = 0;
    for (int temp = num; temp != 0; temp /= 10) {
        digits++;
    }

    // Calculate the sum of the powers of each digit using another for loop
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10; // Extract the last digit
        sum += pow(remainder, digits); // Add the power of the digit to the sum
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum) {
        cout << "Yes, it is an Armstrong number." << endl;
    } else {
        cout << "No, it is not an Armstrong number." << endl;
    }

    return 0;
}

