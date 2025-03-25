/*Print prime number upto  150 using function */

#include<iostream>
using namespace std;
int prime(int n,int k)
{
	for(n=2;n<=150;n++)
	{
		int count=0;
		for(k=1;k<=n;k++)
		{
			if(n%k==0)
			{
				count++;	
			}
			
			
		}
		if(count==2)
		{
			cout<<n<<" is  prime number .";
		}
		cout<<endl;
	}
}
int main()
{
	int a,b;
	cout<<"Prime numbers upto 150 are :\n";
prime(a,b);
}
