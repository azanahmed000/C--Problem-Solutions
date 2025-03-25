#include <iostream>
#include <string>
//#include <limits> // For numeric_limits
using namespace std;
int main() {
    int  fever;
    string syp;
    bool th;

    // Input for fever
    cout << "Enter fever temperature: ";
    //cin >> fever;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"\n";
    cout << "Enter fever temperature: ";
    getline(cin,syp);
    cout<<syp;

	}
