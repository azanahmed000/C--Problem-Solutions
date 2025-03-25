/*Generate a Sequence
Print the sequence of numbers with a step size provided by the user.
Example: Start: 1, End: 10, Step: 2 ? Output: 1, 3, 5, 7, 9.

*/
#include<iostream>
using namespace std;
int main(){
	int start,end,step=0;
	cout<<"Enter the number through which start :";
	cin>>start;
	cout<<"Enter the number at which to end :";
	cin>>end;
	cout<<"Enter the step size";
	cin>>step;
	if(start<=0)
	{
		cout<<"Steps must be greater than two";
		return(0);
	}
	cout<<"Sequence is :";
	for(int i=start ;i<=end ;i+=step)
	{
		i+step<=end;
		cout<<i<<',';
	
		
		
	}

	
	
}
