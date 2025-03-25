/*Generate a Sequence
Print the sequence of numbers with a step size provided by the user.
Example: Start: 1, End: 10, Step: 2 ? Output: 1, 3, 5, 7, 9.

*/
#include<iostream>
using namespace std;
int main(){
	int start,end;
	int count=0;
	cout<<"Enter the number through which start :";
	cin>>start;
	cout<<"Enter the number at which to end :";
	cin>>end;
	if(start<=0)
	{
		cout<<"Enter only positive and non-zero numbers";
		return("invalid entery!")
	}
	
	for(int i=start ;i>=end ;i+=start)
	{
		if(start%2)
		{
			cout<<start;
			cout<<"Total"<<count++<<"numbers exicuted"; 
		}
		else
		{
			cout<<start;
			cout<<"Total"<<count++<<"numbers exicuted";
		}
		
	}
	
	
}
