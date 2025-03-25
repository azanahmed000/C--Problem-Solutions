/* Command-line parameters */
#include <iostream>
using namespace std;

int main(int n, char* str[]) {
    cout << "You provide the following parameters:" << endl;
    for (int i = 1; i < n; i++) {
        cout << str[i] << endl;
    }
    return 0;
}

