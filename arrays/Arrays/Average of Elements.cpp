/*. *Average of Elements:* Find the average of all elements in the array.
*/

#include<iostream>
using namespace std;
int main()
{
	int input[4]={50,100,150,200};
	int i=0;
	int a=0;
	cout<<"Average of Elements:   ";
	while(i<=3)
	{
			a+=input[i];
		
	
		i++;
	}
		int average=a/2;
		cout<<average;
	
}
