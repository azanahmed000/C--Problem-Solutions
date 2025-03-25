/*Write a program that use the (+)operator on object of function and return value  */
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
	count operator ++()
	{
		count temp;
		n=n+1;
		temp.n=n;
		return temp;
		
	}
	
};
int main()
{
	count obj,obj1;
	obj.show();
	obj1=obj;
	obj1.show();
}
