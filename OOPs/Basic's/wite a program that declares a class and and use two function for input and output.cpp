/*wite a program that declares a class and and use two function for input and output
*/
#include<iostream>
using namespace std;
class test
{
	private:
	int n;
	public:
	void inp()
	{
	  cout<<"Enter any number : ";
	  cin>>n;
	  	
	}
	void out()
	{
		cout<<"The enter number is : "<<n;
	
	}

};
int main()
{
	test obj;
	
	obj.inp();
	obj.out();
	
	
}
