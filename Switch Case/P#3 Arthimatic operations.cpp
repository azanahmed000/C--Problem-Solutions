/*Problem 3: Simple Calculator
Write a program that takes two integers and a character as input. 
The character represents an operator 
(+, -, *, /, %).
 Use a switch statement to perform the operation and print the result.
 If an invalid operator is entered, display an appropriate error message.*/
 
 #include<iostream>
 using namespace std;
 
 int main(){
 	int a,b;
 	char op;
 	cout<<"Enter first number   ";
 	cin>>a;
 	cout<<"Enter any opearator  ";
 	cin>>op;
 	cout<<"Enter Second number  ";
 	cin>>b;
 	
 	switch(op)
 	{
 		case'+':
 		cout<<"a+b";
 		break;
 		
 		case'-':
 		cout<<"a-b";
 		break;
 		
 		case'*':
 		cout<<"a*b";
 		break;
 		
 		case'/':
 			if(b==0)
 			cout<<"Divided by zero!";
 			
 		cout<<"a/b";
 		break;
 		
 		case'%':
 		cout<<"a%b";
 		break;
 		
 		case'^':
 		cout<<"a^b";
 		break;
 		
 		default:
 		cout<<"Enter an Invalid operator";
 		
 		
 		
 		
 		
 		
 		
 		
 		
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 }
