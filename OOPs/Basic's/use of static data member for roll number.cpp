/*Write a program that creates three objects of class.
Each object of class nust assigned a unique roll number (use static data member for roll number)
*/
#include<iostream>
using namespace std;
class student
{
	private :
		static int r;
		int marks, rollNumber;
		char name[50];
	public:
	
	void in()
	{
		cout<<"Enter the Name of the candidate : "<<endl;
		cin.ignore(); 
        cin.getline(name, 50);
		cout<<"Enter the marks of the candidate : "<<endl;
		cin>>marks;
		
	}
	student()
	{
		r++;
		 rollNumber =r;
		
	}
	void out()
	{
		cout<<"Roll number : "<< rollNumber<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Marks  :"<<marks<<endl;
		
	}
	
		
};
int student::r=0;
main()
{
	student s1,s2,s3;
	s1.in();
	s2.in();
	s3.in();
	cout<<"Students details is as :////";
	s1.out();
	s2.out();
	s3.out();
	
	
}
