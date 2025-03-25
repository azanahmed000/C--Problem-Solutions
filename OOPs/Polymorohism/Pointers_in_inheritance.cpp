// Write class that use pointers to show member function and made singel class

#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "Parent class A..."<<endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "child class B...";
    }
};
class C : public A
{
public:
    void show()
    {
        cout << "child  class C...";
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