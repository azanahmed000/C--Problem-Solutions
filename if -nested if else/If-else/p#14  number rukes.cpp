#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter first number.";
	cin>>a;
	char op;
	cout<<"Enter the operator";
	cin>>op;
	int b;
	cout<<"Enter  second number.";
	cin>>b;
	if(op=='+')
	{
		cout<<"Sum ="<<a+b;
		
	}
	else if(op=='-'){
		cout<<"Subrtract ="<<a-b;
		
	}
	else if(op=='*'){
		cout<<"Multiplication ="<<a*b;
	}
		else if(op=='/'){
		cout<<"divide ="<<a/b;
	}
	else{
		cout<<"Invalid operator!";
	}
}

