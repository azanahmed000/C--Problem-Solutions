/*Write a program that counts the number of objects created of a particular class
*/
#include<iostream>
using namespace std;
class yahoo
{
	private:
		static int n;
		public :
			yahoo()
			{
				n++;
				
			}
			 static void show()
			{
				cout<<"You have created "<<n<<" object "<<endl;
			}
			
};
int yahoo::n=0;
int  main()
{
	
	yahoo::show();
	yahoo x,y;
	x.show();
	yahoo z;
	x.show();
	
}
