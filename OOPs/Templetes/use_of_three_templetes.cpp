#include<iostream>
//#include <string>
using namespace std;
template <class t1=int,class t2=float,class t3=char>
class values
{
    public:
    t1 a;
    t2 b;
    t3 c;
     values(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;

    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
    }

};
int main()
{
    values<> v(4,1.4,'v');
    v.display();
    cout<<endl;
    values<float,string,int> g(1.3,"azan",3);
    g.display();
}