/*Write a program that use the  postfix(+)operator on object of function and return value  */
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
	count operator ++(int)
	{
		count temp;
		n=n+1;
		temp.n=n;
		return temp;
		
	}
	
};
int main()
{
	count obj;
	obj.show();
	++obj;
	obj++;
	obj.show();
	
}
