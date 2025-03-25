/*made a class that store the grade and marks of the candidate and in the
given class pass parameters to constructor.
*/
#include<iostream>
using namespace std;
class student 
{
	private :
		int marks;
		char grade;
		
	public:
	student (int m,char g)
	{
		marks=m;
		grade=g;
		
	}
	
	void show()
	{
		cout<<"Marks of student : "<<marks<<endl;
		cout<<"Grade  of student : "<<grade<<endl;
		
	}
};
int main()
{
	student s1(990,'B'),s2(1110,'A');
	cout<<"Record of student 1 : "<<endl;
	s1.show();
	cout<<"Record of student 2 : "<<endl;
	s2.show();	
}
