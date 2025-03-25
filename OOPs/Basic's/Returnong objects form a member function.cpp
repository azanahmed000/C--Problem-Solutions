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
			cout<<"You travled "<<km<<"  in  "<<hr<<" Hours"<<endl;
			
		}
		travel add(travel p)
		{
			travel t;
			t.km=km+p.km;
			t.hr=hr+p.hr;
			return t;
			
		}
};
main()
{
	travel my,your,r;
	my.get();
	my.show();
	your.get();
	your.show();
	r=my.add(your);
	cout<<"Your total traveling  is as follows : "<<endl;
	r.show();
	
	
}

