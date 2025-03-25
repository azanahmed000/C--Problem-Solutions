#include<iostream>
using namespace std;

// Travel insurance premium

int main() {
    string destination;
    int duration;
    string medical_history;

    cout << "Tell us your destination (International or Domestic): ";
    cin >> destination;
    cout << "Tell us the duration in days: ";
    cin >> duration;
    cout << "Tell us your medical history (pre_existing or none): ";
    cin >> medical_history;

    // Ensure consistent input handling for case sensitivity
    for (auto &c : destination) c = tolower(c);
    for (auto &c : medical_history) c = tolower(c);

    if (destination == "international") {
        if (duration > 15) {
            if (medical_history == "pre_existing") {
                cout << "Premium = 300$";
            } else {
                cout << "Premium = 200$";
            }
        } else if (duration <= 15) {
            if (medical_history == "pre_existing") {
                cout << "Premium = 250$";
            } else {
                cout << "Premium = 150$";
            }
        }
    } else if (destination == "domestic") {
        if (duration > 7) {
            cout << "Premium = 100$";
        } else {
            cout << "Premium = 50$";
        }
    } else {
        cout << "Invalid destination entered.";
    }

    return 0;
}

