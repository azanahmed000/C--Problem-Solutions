

#include<iostream>
using namespace std;
class parent
{
	private:
		int c;
		
	protected:
		int b;
	public:
		int a;
};
class child:private parent
{
	public:
	void in()
	{
		cout<<"Enter a : ";
		cin>>c;
		cout<<"Enter b : ";
		cin>>b;
		
	}
	void show()
	{
		cout<<"a ="<<a<<endl;
		cout<<"b ="<<b<<endl;
		
	}
	
	
};
int main()
{
	child obj;
	obj.in();
	obj.show();
}
