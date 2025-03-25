/*Write a class that contains two integer data member which are initialzed  to  100 when 
an object  is created .It has a member function avg that  display the average of data members.
*/
#include<iostream>
using namespace std;
class data
{
	private:
		int x,y;
	public:
		data()
		{
			cout<<"Enter the value of both x & y :";
			cin>>x>>y;
		
			
		}
		void avg()
		{
			cout<<"Value of x ="<<x<<endl;
			cout<<"Value of y ="<<y<<endl;
			cout<<"Average  ="<<(x+y)/2<<endl;
			
		}
		
};
int main()
{
	data n;
	n.avg();
	
}

