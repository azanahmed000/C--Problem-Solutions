/*Returning by Reference*  
   Write a function that returns a reference to a global variable.  

   cpp
   int& getGlobalVariable();
*/

#include<iostream>
using namespace std;
int globalvarr=40;
int &getglobalvarr()
{
	
	
		return globalvarr;
	

}
int main()
{
	
	cout<<"Orignal varriable is  as : "<<globalvarr<<endl;


 getglobalvarr()=100;

cout<<"Updated varriable is as : "<< globalvarr<<endl;

}

