/*Circular Reference Update*  
   Write two functions that take the same variable by reference and modify it sequentially.  

   cpp
   void increment(int& x);
   void square(int& x); as   
   
*/
#include<iostream>
using namespace std;
int increament(int& x )
{
	x+=1;
	cout<<x;
}
int square (int& x)
{
	x*=x;
	cout<<x;
}
int main()
{
	int j;
	cout<<"Enter any  number : ";
	cin>>j;
	cout<<"The number after increament is as : ";
	increament(j);
	cout<<"\n\nThe number after  square is as : ";
	square(j);
	
	
}
