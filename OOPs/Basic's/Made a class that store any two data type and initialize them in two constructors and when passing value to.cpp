/*Made a class that store any two data type and initialize them in two constructors and when passing value to
constructor initialize one empty
*/
#include<iostream>
 #include<string.h>
 using namespace std;
 class over
 {
 	private:
 		int num;
 		char ch;
 		public:
 			over()
 		{
 			num=0;
 			ch='x';
		 }
		 
		over(int n,char c)
		{
			num=n;
			ch=c;
		}
	void show()
	{
		cout<<" num ="<<num<<endl;
		cout<<"char ="<<ch<<endl;
		
	}
 
 
 };
  main()
  {
  	over first,second(500,'y');
  	cout<<"The values in first is :";
  	first.show();
  	cout<<"The values in second :";
  	second.show();
  }
