/*Write a class that displays a simple message
 in a screen by using consturctor (function 
 having same name as of class )*/
 #include<iostream>
 using namespace std;
 class Hello
 {
 	private :

	public :
		Hello()
		{
			cout<<"Object is created ......... "<<endl;
			
		}
		~Hello()
		{
			cout<<"Object is distroyed ......... "<<endl;
			
		}
 };
 int main()
 {
 	Hello x,y,z;
 }
