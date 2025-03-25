/*Return a value to the function */
#include<iostream>
using namespace std;
int grade(char g)
{
	int marks;
	if(marks>90)
	return 'A';
	else if(marks<75)
	return 'B';
	else if(marks<60)
	return 'C';
	else if(marks<55)
	return 'D';
	else if(marks<45)
	return 'F';
	
}
int main()
{
	int number;
	cout<<"Enter your marks :";
	cin>>number;
	char j;
	char i=grade(j);
	cout<<"Your grade is :"<<i;
	
}
