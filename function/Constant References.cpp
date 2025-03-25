/*/*Constant References*  
   Write a function that takes a constant reference to a variable and attempts to modify it (observe the compiler error).  

   cpp
   void displayValue(const int& x);*/
#include<iostream>
using namespace std;
int increament(const int& x )
{
	//x+=1;//this type of modification  can't be implement on constants
	
}

int main()
{
	int j;
	cout<<"Enter any  number : ";
	cin>>j;
	cout<<"The number after increament is as : ";
	increament(j);
	cout<<j;
	
}
   

