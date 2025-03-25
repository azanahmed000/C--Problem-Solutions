/*Modifying an Array*  
   Write a function to double the elements of an array using pass-by-reference.  

   cpp
   void doubleArray(int (&arr)[5]);
   */

#include <iostream>
using namespace std;

// Function to update the array
updatedarr(int arr[4]) {
    cout << "\nUpdating the Array:\n";
    for(int k=0;k<4;k++)
    {
    	arr[k]*=2;
    	
    	
	}
}

int main() {
    // Initialize the array
    int arry[4] = {1, 2, 3, 4};
    
    // Print original array
    cout << "Original Array:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Array element " << i << ": " << arry[i] << "\n";
    }
    
    // Update the array
    updatedarr(arry);
    
    // Print updated array
    cout << "Updated Array:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Array element " << i << ": " << arry[i] << "\n";
    }

    //return 0;
}

