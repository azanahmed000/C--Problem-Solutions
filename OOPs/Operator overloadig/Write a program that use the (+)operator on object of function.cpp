/*Write a program that use the (+)operator on object of function */
#include<iostream>
using namespace std;
class count
{
	private:
		int n;
	public :
		count()
		{
			n=0;
		}
	void show()
	{
		cout<<"n ="<<n<<endl;
		
	}
	int operator ++()
	{
		n=n+2;
		
	}
	
};
int main()
{
	count obj;
	obj.show();
	++obj;
	obj.show();
}
