/*

2. *Sum of Natural Numbers*  
   Calculate the sum of the first n natural numbers using a for loop.  
   Example: n = 5 ? Output: 15.

*/
#include<iostream>
using namespace std;
int main()
{
int num;
int sum=0;
cout<<"Enter the Number to which  sum want to find :"<<endl;
cin>>num;

   for(int i=1 ; i<=num ;i++)
   {
   	sum=sum+i;
    
   }
   cout<<"Sum of "<<num<<" Natural Number:"<<sum<<"\t";
}
