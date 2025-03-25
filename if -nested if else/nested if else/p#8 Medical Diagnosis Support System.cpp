#include <iostream>
#include <string>
#include <limits> // For numeric_limits
using namespace std;

int main() {
    string fever;
    string syp;
    bool th;

    // Input for fever
    cout << "Enter fever temperature: ";
    cin >> fever;

    // Clear the input buffer to ensure `getline` works properly
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Input for symptoms
    cout << "Describe symptoms (e.g., 'cough and sore throat'): ";
    getline(cin, syp);

    // Input for travel history
    cout << "Any recent travel history? Enter 1 for Yes, 0 for No: ";
    cin >> th;

    // Diagnosis logic
    if (fever > "102") {
        if (syp == "cough and sore throat") {
            if (th == 1) {
                cout << "Likely viral infection." << endl;
            } else {
                cout << "Likely bacterial infection." << endl;
            }
        } else if (syp == "muscle pain present") {
            cout << "Likely flu." << endl;
        } else {
            cout << "Unknown illness." << endl;
        }
    } else if (fever == "102") {
        if (syp == "headache and fatigue present") {
            cout << "Mild viral illness." << endl;
        } else {
            cout << "No significant illness." << endl;
        }
    } else {
        cout << "Fever too low for diagnosis." << endl;
    }

    return 0;
}

