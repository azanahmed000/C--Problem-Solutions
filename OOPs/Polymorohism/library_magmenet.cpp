// . Library Management System*  
// Design a system to manage books, members, and librarians. Use inheritance
//  for different types of members (students, professors), encapsulation for
//   book details, and polymorphism for different actions like borrowing or returning.
#include<iostream>
#include <string>
using namespace std;
class library
{
    public:
       string  memberid;
       
       string book;
       int days;

       void a(int p)
       {
        if(p==1)
        {
            cout<<"\nEnter the Number of Days you want to borrow : ";
            cin>>days;
            if(days>15)
            {
                cout<<"\nSorry but book can't not be givin more than (15 Days). ";
            }
            
        }
        else
        {
            cout<<"\nEnter the number of days after which you are returning :  ";
            cin>>days;
            if(days>15)
            {
                cout<<"\nExtra charges of (500 Pkr) be applyied for returning book late.";
            }
        }

       }
    

};
class student:public library
{
    public:
     string name;
    string Major;

    void in()
    {

        cout<<"Enter your details : "<<endl;
        cout<<"\nMember ID : ";
        getline(cin,memberid);
        cout<<"\nName  :" ;
        getline(cin,name);
        cout<<"\nBook Name :";
        getline(cin,book);
        cout<<"\nMajor : ";
        getline(cin,Major);

    }

    void show()
    {

        cout<<"Name = "<<name<<endl;
        cout<<"Member ID ="<<memberid<<endl;
        cout<<"Book name = "<<book<<endl;
        cout<<"Major = "<<Major<<endl;

    }
    

};
class Professor:public library
{
    public:
     string name;
    string Department;
    void in()
    {
        cout<<"Enter your details : "<<endl;
        cout<<"\nMember ID : ";
        getline(cin,memberid);
        cout<<"\nName  :" ;
        getline(cin,name);
        cout<<"\nBook Name :";
        getline(cin,book);
        cout<<"\nDepartment : ";
        getline(cin,Department);
        
       

    }
    void show()
    {

        cout<<"Name = "<<name<<endl;
        cout<<"Member ID ="<<memberid<<endl;
        cout<<"Book name = "<<book<<endl;
        cout<<"Department = "<<Department<<endl;

    }
    
    

};
int main()
{
   cout<<"Select Your staus : ";
   int p;
   cout<<"\n1. Student \n"<<endl;
   cout<<"2. Professor "<<endl;
   cin>>p;
   if(p==1)
   {
    student s1;
    s1.in();
    cout<<"Select the option :"<<endl;
    cout<<"1.Borrow BOOk "<<endl;
    cout<<"2.Return BOOk "<<endl;
    int y;
    cin>>y;
    library b;
    b.a(y);

    s1.show();
    


   }
   else
   {
        Professor p1;
        p1.in();
        cout<<"Select the option :"<<endl;
        cout<<"1.Borrow BOOk "<<endl;
        cout<<"2.Return BOOk "<<endl;
        int y;
        cin>>y;
        library b;
         b.a(y);

         p1.show();


   }
   


}
