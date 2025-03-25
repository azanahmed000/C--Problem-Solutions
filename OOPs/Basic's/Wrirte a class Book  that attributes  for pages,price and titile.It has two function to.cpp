/*Wrirte a class Book  that attributes  for pages,price and titile.It has two function to 
input and output the data and display them ,Create three objects of the class 
and show the output(Use the concept of default copy constructor)*/
#include<iostream>
#include<stdio.h>
using namespace std;
class book
{
	private:
		int pg,price;
		char title[50];
		public:
			void get()
			{
				cout<<"\n\nEnter the pages  of  the book :";
				cin>>pg;
				cout<<"\n\nEnter the Price of the book : ";
				cin>>price;
				cout<<"\n\nEnter the title of the book :";
				gets(title);
				
				
			}
			void show()
			{
				cout<<"Title : "<<title<<endl;
				cout<<"Pages :"<<pg<<endl;
				cout<<"Price :"<<price<<endl;
				
			}
};
main()
{
	book b1;
	b1.get();
	book b2(b1);
	book b3=b1;
	cout<<"\n\nThe detail of book 1 : "<<endl;
	b1.show();
	cout<<"\n\nThe detail of book 2 : "<<endl;
	b2.show();
	cout<<"\n\nThe detail of book 3 : "<<endl;
	b3.show();
}

