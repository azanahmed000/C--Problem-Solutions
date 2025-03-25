/*### 6. *GCD of Two Numbers*  
Find the Greatest Common Divisor (GCD) of two numbers using nested loops.  
- Outer loop: Iterates downward from the smaller number.  
- Inner loop: Checks if both numbers are divisible by the current value.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"To find Greatest Common Multiple of any number:"<<endl;
	cout<<"Enter the First no :";
	cin>>a;
	cout<<"Enter the Second no :";
	cin>>b;
	
int gcd = 1; // Initialize GCD as 1

    for (int i = 1; i <= a && i <= b; ++i) { // Loop through all possible divisors
        if (a % i == 0 && b % i == 0) {      // Check if 'i' divides both numbers
            gcd = i; // Update GCD
        }
    }
    cout<<"DCD is "<<gcd;
	
	
	
	
	
}
