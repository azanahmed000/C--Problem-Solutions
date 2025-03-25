/*Write a class TV that contain  attributes of  Brand name ,Model and Retail Price .
Write a method to display all attributes and a method to change the attributes .Also 
write a constructor to initialize all the attributes
 */
 #include<iostream>
 #include<string.h>
 using namespace std;
 class TV 
 {
 	public :
 		TV (char barnd[],char mod[],float price);
 		void change (char brand[],char mod[],float price);
 		void display();
 		private :
 			char brandname[20];
 			char model[10];
 			float rprice ;
 	
 };
 TV::TV(char barnd[],char mod[],float price)
 {
 	strcpy(brandname,barnd);
 	strcpy(model,mod);
 	 rprice=price;
 }
 void TV :: change (char brand[],char mod[],float price)
 {
 	strcpy(brandname,brand);
 	strcpy(model,mod);
 	 rprice=price;
 }
 	void TV ::display()
 	{
 		cout<<"Brand Name "<<brandname<<endl;
 		cout<<"Model : "<<model<<endl;
 		cout<<"Price : "<<rprice<<endl;
 }
int main()
 {
 	TV test("SONY ","HDTV ",25000);
 	cout<<"Displaying the object......."<<endl ;
 	test.display();
 	test.change("Toshiba ","STDV ",22000);
 	cout<<"Displaying object after the change ...."<<endl;
 	test.display();
 	
 	
 }
