// Write class that use pointers to show member function and made singel class and use the virtual function 

#include <iostream>
using namespace std;
class A
{
public:
     virtual void show()
    {
        cout << "Parent class A..."<<endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "child class B..."<<endl;
    }
};
class C : public A
{
public:
    void show()
    {
        cout << "child  class C..."<<endl;
    }
};
int main()
{
    A obj1;
    B obj2;
    C obj3;
    A* ptr;
    ptr=&obj1;
    ptr->show();
    ptr=&obj2;
    ptr->show();
    ptr=&obj3;
    ptr->show();
}