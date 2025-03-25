// // Write a class with an integer  data  member ,a 
// function to input and a function to display  it .Create an object of the 
// class using pointers and calls its member functions.
#include <iostream>
using namespace std;
class test
{
    private:
    int n;
    public:
    void input()
    {   cout<<"Enter the number: ";
         cin>>n;
    }
    void display()
    {
        cout<<"The number is: "<<n<<endl;
    }
   
};
int main()
{
    test *t;
    t=new test();
    t->input();
    t->display();

}