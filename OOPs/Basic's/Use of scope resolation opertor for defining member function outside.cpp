/*(Use of scope resolation ::)Write a class result that contains rollno ,name and marks  of three subjects .The  marks  are
stored in an array  of integers.The class also contains  the following members functions:
1.input()[for taking input]
2.show()[for showing the value of data members]
3.total()[for returns the total marks  ]
4.avg()[returns the the average marks of a student]*/
#include<iostream>
using namespace std;
class result
{
	private:
	int rollno;
	int marks[3];
	char name[20];
	public:
	int inp();
	void show();
	int total();
	float  avg();
	
};
 int result ::inp()
		{
			cout<<"\n\nEnter the name of the student : "<<endl;
			gets(name);
			cout<<"\n\nEnter the roll number of the candidate : "<<endl;
			cin>>rollno;
			for(int i=0;i<3;i++)
			{
				cout<<"\n\nEnter the  marks of the  cadidate :"<<endl;
				cin>>marks[i];
				 
			}
			
		}
		void result ::show()
		{
			cout<<"\n\nThe name of the candidte is :"<<name<<endl;
			cout<<"\n\nThe candidate have the rollnumber :"<<rollno<<endl;
		 	for(int i=0;i<3;i++)
		 	{
		 		cout<<"\n\nThe marks of  "<<i<<" subject is : "<<marks[i]<<endl;
		 		
		 		
			 }
			
		}	
		int result ::total()
		{
			
			for(int i=0;i<3;i++)
		 	{
		 		int t=0;
		 		t+=marks[i];
		 		
		 		return t;
			 }
		}
		float result ::  avg()
		{
			
			for(int i=0;i<3;i++)
		 	{
		 		int t=0;
		 		t+=marks[i];
		 			return t/3;
		 	
			 }
		
			
			 }	 
	
int main()
{
	int t;
	float a;
	result r1;
	r1.inp();
	r1.show();
	
	t=r1.total();
	cout<<"\n\nThe  total marks in all subject is  about : "<<t<<endl;
	a=r1.avg();
	cout<<"\n\nThe average of all marks is : "<<a<<endl;
	
}
