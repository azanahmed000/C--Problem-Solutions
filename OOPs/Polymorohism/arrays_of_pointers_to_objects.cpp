// Write a class that conatains anttribute name ,a function to input name and a function to display name.
// Creates array of pointers in which elemnet refferes to an object of the class.

#include <iostream>
using namespace std;
class person 
{
    string name;
public:
void get()
{
    cout<<"Enter the name of the candidate : ";
    cin>>name;


}
void show()const
{
    cout<<"Name = "<<name<<endl;

}

};
int main()
{
    person* ptr[5];
    int i;
    for(i=0;i<5;i++)
    {
        ptr[i]=new person;
        ptr[i]->get();

    }
    for(i=0;i<5;i++)
    {
        
        ptr[i]->show();
        delete ptr[i];
    }
}
