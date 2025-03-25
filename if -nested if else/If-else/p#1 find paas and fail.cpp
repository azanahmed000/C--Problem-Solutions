#include<iostream>
using namespace std;

int main (){
   cout<<"Choose the correct option.\nQuaid-e-Azam was born in :\n(a) 25-Dec-1947\n(b)9-Sep-1934\n(c)19-Nov-1848\n(d)20-March-1888";
   
   char o1='a',o2='b',o3='c',o4='d';
   string option;
   cin>>option;
    if (o1=='a'&&!o2=='b'&&!o3=='c')
    {
    	cout<<"Answer is correct";
    	
	}

    else
    {
    	cout<<"You enter the wrong option";
	}

}
