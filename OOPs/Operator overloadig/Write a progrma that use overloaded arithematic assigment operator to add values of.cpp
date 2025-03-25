/*Write a progrma that use overloaded arithematic assigment operator to add values of 
object ( +=  )*/
#include<iostream>
using namespace std;
class read
{
	private:
		int pages;
		int days;
	public:
		read()
		{
			pages=days=0;
		}
		void in()
		{
			cout<<"Enter how much pages you readed :";
			cin>>pages;
			cout<<"Enter the days in which you read :";
			cin>>days;
			
		}
		void show()
		{
			cout<<"You readed "<<pages<<" in  "<<days;
			
		}
	
		read operator +=(read r)
		
		{
			days=days+r.days;
			pages=pages+r.pages;
			return *this;
	}
};

int main(){
	read r1,r2;
	r1.in();
	r2.in();
	cout<<"\n\nReading number 1..."<<endl;
	r1.show();
	cout<<"\n\nReading number 2..."<<endl;
	r2.show();
	cout<<"\n\nAdding both readings using += ...."<<endl;
	r2+=r1;
	cout<<"\n\nTotal readings is as follows : "<<endl;
	r2.show();
}
