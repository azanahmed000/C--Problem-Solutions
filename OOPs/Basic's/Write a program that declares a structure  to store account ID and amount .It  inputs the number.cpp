/*Write a program that declares a structure  to store account ID and amount .It  inputs the number 
of account  holders  from user and creates a dynamic array of structures to store the records of accounts.
The program should declare two function i.e. one for getting input form the user and the other for showing
records to the user.. */
#include <iostream>
using namespace std;

// Structure to store account details
struct Account {
    int accountID;
    double amount;
};

// Function to get input from the user
void getInput(Account* accounts, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter details for account " << i + 1 << ":\n";
        cout << "Account ID: ";
        cin >> accounts[i].accountID;
        cout << "Amount: ";
        cin >> accounts[i].amount;
    }
}

// Function to display records
void showRecords(const Account* accounts, int size) {
    cout << "\nAccount Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Account " << i + 1 << ":\n";
        cout << "Account ID: " << accounts[i].accountID << "\n";
        cout << "Amount: " << accounts[i].amount << "\n";
    }
}

int main() {
    int n;

    // Get the number of account holders
    cout << "Enter the number of account holders: ";
    cin >> n;

    // Dynamically allocate memory for account records
    Account* accounts = new Account[n];

    // Input and display records
    getInput(accounts, n);
    showRecords(accounts, n);

    // Free dynamically allocated memory
    delete[] accounts;

    return 0;
}

