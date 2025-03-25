/*Default paramenters in a function  */
#include<iostream>
using namespace std;
int test(int n=100);

int main()
{
	test();
	test(2);
	test(75);
	

}
int test(int n)
{
	cout<<"n ="<<n<<endl;	
}

