/*defaut parameter in function 2 */
#include<iostream>
using namespace std;
int add(int con1=5,int con2=10)
{
	int con3=con1 +con2;
	cout<<"Sum of two number is as : "<<con3<<endl;
	
	
}
int main()
{
	add();
	add(1,2);
	add(1);
}
