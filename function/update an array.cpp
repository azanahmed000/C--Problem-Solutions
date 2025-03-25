#include <iostream>
using namespace std;

// Function to update the array
void updatedarr(int (&arr)[4]) {
    cout << "\nUpdating the Array:\n";
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 7;
    arr[3] = 8;
}

int main() {
    // Initialize the array
    int arr[4] = {1, 2, 3, 4};
    
    // Print original array
    cout << "Original Array:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Array element " << i << ": " << arr[i] << "\n";
    }
    
    // Update the array
    updatedarr(arr);
    
    // Print updated array
    cout << "Updated Array:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Array element " << i << ": " << arr[i] << "\n";
    }

    return 0;
}

