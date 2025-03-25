////Write a base class that have attributes (Id ,name , addree ) of a person and 
////they has a constructor to initialize ,a member  to input  and  a member  function  to display 
//data member function to input and a member function to display data members.
//Create another class  student that inherits ,Person class.It has additional attributes of roll number
//and marks .It also has member funcition to input and display its data members   
#include<iostream>
using namespace std;
class person
{
	protected:
		int id;
		char name[50],address[100];
	public:
	person()
	{
		id=0;
		name[0]='\0';
		address[0]='\0';
	}
	void input()
	{
		cout<<"Enter your id : ";
		cin>>id;
		cin.ignore(); 
		cout<<"Enter your Name : ";
		cin.getline(name,50);
		cout<<"\nEnter your address : ";
		cin.getline(address,100);
		
	}
	void show()
	{
		cout<<"\n\nId  ="<<id;
		cout<<"\n\n Name  ="<<name;
		cout<<"\n\nAddress ="<<address;
	
	}

};
class student :public person
{
	private:
	int rollnum	;
	int marks;
	public:
		student()
		{
			rollnum=marks=0;
		}
		void input1()
		{
		cout<<"\n\n\nEnter your Roll number : ";
		cin>>rollnum;
		cout<<"\nEnter your marks : ";
		cin>>marks;
		
			
		}
		void show1()
		{
			cout<<"\n\nRoll number ="<<rollnum;
			cout<<"\n\n Marks  ="<<marks;
		}
	
};

int main()
{
	student s;
	s.input();
	s.input1();
	s.show();
	s.show1();
}
