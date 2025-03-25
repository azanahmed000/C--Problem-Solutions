/*### 13. *Automorphic Numbers*  
Find automorphic numbers between 1 and 1000.  
- Outer loop: Iterates through numbers.  
- Inner loop: Checks if the square of the number ends with the number itself.


#include<iostream>
using namespace std;
int main()
{

	int au;
	cout<<"Automorphic numbers between 1 and 1000 is :"<<endl;
	for(int i=1;i<=1000;i++)
	{
		int sq=i*i;
		for(int a=2;a<=sq/2; sq/=10)
		{
		   au=sq%10;
		   if(au==i)
		   {
		   	 	cout<<"The "<<i<<" is an Automorphic Number :"<<endl;
		   }
		   else
			{
				void(0);
			}	
		}*/
		
#include <iostream>
using namespace std;

int main() {
    cout << "Automorphic numbers between 1 and 1000 are:" << endl;

    for (int i = 1; i <= 1000; i++) { // Outer loop: Iterate through numbers
        int square = i * i;          // Calculate square of the current number

        // Find the modulus factor based on the number of digits in 'i'
        int mod = 1;
        for (int temp = i; temp > 0; temp /= 10) { // Inner loop: Calculate mod
            mod *= 10;
        }

        // Check if the last digits of 'square' match 'i'
        if (square % mod == i) {
            cout << i << " is an Automorphic Number." << endl;
        }
    }

    return 0;
}

		 
			
		
		
	

