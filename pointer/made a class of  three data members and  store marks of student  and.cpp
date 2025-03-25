/*made a class of  three data members and  store marks of student  and 
find the sum and  average of  the students */
#include<iosteam>
using namespace std;
class student
{
	private:
	int a,b,c;
	public:
		void in()
		{
			cout<<"Enter the marks of the students :\n ";
			cin>>a>>b>>c;
			
		}
		int sum()
		{
			return a+b+c;
		}
		float avg()
		{
			return a+b+c/3;
			
		}
		
};
int main()
{
	student marks;
	marks.in();
	int  s=marks.sum();
	float av=marks.avg();
	cout<<"The sum of marks is as : "<<s;
	cout<<"The average of marks is as : "<<av;
	
}
