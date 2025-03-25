/*use of friend class*/
#include<iostream>
using namespace std;
class a
{
	private:
		int A,B;
		public:
		a()
		{
			A=10;
			B=20;
		}
	friend class b;
	
};
class b
{
	public:
		void showa(a obj)
		{
			cout<<"The value of a : "<<obj.A<<endl;
			
		}
		void showb(a obj)
		{
			cout<<"The value of b : "<<obj.B<<endl;
			
		}
};
main()
{
	a x;
	b y;
	y.showa(x);
	y.showb(x);
}

