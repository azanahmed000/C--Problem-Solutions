/*Write a Travel tha has attributes kilometer ,hours,show input and output by the differnet function and 
a function that add() that sum the total workout time .(Use the object as a function)*/

#include<iostream>
using namespace std;
class travel
{
	private:
		int km,hr;
		public:
		travel()
		{
			km=hr=0;
		}
		void get()
		{
			cout<<"Enter the Kilometers traveled : ";
			cin>>km;
			cout<<"Enter hours traveled : ";
			cin>>hr;
		
		}
		void show()
		{
			cout<<"You travled "<<km<<"  in  "<<hr<<endl;
			
		}
		void add(travel p)
		{
			travel t;
			t.km=km+p.km;
			t.hr=hr+p.hr;
			cout<<"The Total Traviling is :  "<<t.km<<"   Kilometers  in "<<t.hr<<" Hours "<<endl;
		}
};
main()
{
	travel my,your;
	my.get();
	my.show();
	your.get();
	your.show();
	my.add(your);
}

