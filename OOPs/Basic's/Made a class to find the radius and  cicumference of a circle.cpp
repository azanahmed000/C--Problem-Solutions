/*Made a class to find the radius and  cicumference of a circle */
 #include<iostream>
 #include<conio.h>
 using  namespace std;
 class circle
 {
 	private:
 		float radius ;
 	public:
 		void get_radius(float r)
 	{
 		radius=r;
 	
	}
	void area()
	{
		cout<<"\n\n Area of circle is : "<<3.14*radius*radius;
		
	}
	void cicumfernece()
	{
		cout<<"\n\n Circumference of circle : "<<2*3.14*radius;
		
	}
	
 	
 	
 };
 int main()
 {
 	circle c1;
 	float r;
 	cout<<"\n\n Enter the radius of circle : "<<r;
 	cin>>r;
 	c1.get_radius(r);
 	c1.area();
 	c1.cicumfernece();
 	
 	
 }
