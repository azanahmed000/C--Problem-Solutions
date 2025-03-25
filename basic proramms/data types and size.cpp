#include<iostream>

using namespace std;

int main(){
	int i =-2147483647;
	int ii =-2147483647;
	int iii =2147483647;
	cout<<"The value of  integers are :"<<iii<<i<<sizeof(int) ;
	short s =-32768;
	short ss =-32768;
	short sss =32767;
	cout<<"The value of  short integer are :"<<s,ss,sss<<sizeof(-32770,-32768,32780);
	long long l =-9223372036854775810;
	long long ll =-9223372036854775808;
	long long lll =9223372036854775805;
	cout<<"The value of  long long are :"<<l,ll,lll<<sizeof(9223372036854775810,-9223372036854775808,9223372036854775805);
	unsigned int u =4294967300;
	cout<<"The value of  unsigned int are :"<<u<<sizeof(429496730);
	char c =-130;
	cout<<"The value of  character are :"<<c<<sizeof(-130);
	
	
}
