//Made a parent  class and a child class and use the both constructors 
#include<iostream>
using namespace std;
class parent{
	
	protected:
	int n;
	public :
	parent()
	{
		n=0;
		
	 } 
	 parent(int p)
	 {
	 	n=p;
	 	
	  } 
	  void show()
	  {
	  	cout<<"n ="<<n<<endl;
	  	
	  }
};
class child :public parent{
	private :
		char ch;
		public:
			child():parent()
			{
				ch ='x';
				
			}
		child (char c ,int m):parent(m)
		{
			ch=c;
			
		}
		void dispaly()
		{
			cout<<"ch ="<<ch<<endl;
			
		}
};
int main()
{
	child obj1,obj2('@',100);
	cout<<"Obj1 is as follows :\n";
	obj1.show();
	obj1.dispaly();
	cout<<"\n obj2 is as follow :\n";
	obj2.show();
	obj2.dispaly();
}
