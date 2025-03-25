/*Insert Element:* Insert an element at a specific position in the array.
*/
#include<iostream>
using namespace std;
int main()
{
	int num[11]={5,10,15,20,25,30,35,40,45,50};
	//int n=sizeof(num)/sizeof(num[0]);
	int n=10;
	int position;
	int element;
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<",";
	}
	
	cout<<"\n\nEnter  the element you want  to insert ";
	cin>>element;
	cout<<"\n\nEnter the positon at which you want to insert ";
	cin>>position;
	if(position>n)
	{
		cout<<"Invalid insertion "<<endl;
		return(0);
	}
	else
	{
		for(int i=n;i>position;i--)
		{
			num[i]=num[i-1];
		}
			
	}
	num[position]=element;
	

	
	
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<",";
		}
}
