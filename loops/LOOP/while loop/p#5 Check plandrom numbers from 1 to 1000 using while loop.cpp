/*Check plandrom numbers from 1 to 1000 (using while loop:)*/

#include<iostream>
using namespace std;
int main()
{
	int i=1,orignal;
	int re,digit,reverse;
	cout<<"The Plandrom number from 1 to 1000 :"<<endl;
	while(i<=1000)
	{ 
		re=i;
		reverse=0;
		orignal=i;
		while(re>0)
		{
			digit=re%10;
			reverse=reverse*10+digit;
			
			re/=10;
		}
		if(orignal==reverse)
		{
			cout<<" \n    -"<<orignal<<"\t";
		}
		i++;
	}
	
	
	
}
