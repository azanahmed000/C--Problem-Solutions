/*Made a structure to store a student information */
#include<iostream>
using namespace std;
struct student 
{
	string name;
	int rollnumber;
	int marks;
	float aver;
	char grade;
	
};
main()
{
	student s;
	cout<<"Enter the Student name : ";
	cin>>s.name;
	cout<<"Enter the Student Roll number : ";
	cin>>s.rollnumber;
	cout<<"Enter the Student marks : ";
	cin>>s.marks;
	cout<<"Enter the Student average : ";
	cin>>s.aver;
	cout<<"Enter the Student grade : ";
	cin>>s.grade;
	
	cout<<"You enter  the following detail of Student "<<s.name<<endl;
	cout<<"ROLL number :"<<s.rollnumber<<endl;
	cout<<"Marks :"<<s.marks<<endl;
	cout<<"Average :"<<s.aver<<endl;
	cout<<"Grade :"<<s.grade<<endl;
	
	
}
