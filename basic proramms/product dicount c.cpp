#include<iostream>

using namespace std;

int main()
{
 float pp,lp;
 cout<<"Entert Product price and Loyality poiunts:";
 cin>>pp>>lp;
 int pd=10;
 int ld=5;
 float r_amo=pp-((pd*pp)/100);
 cout<<"After discount of 10% you will pay:"<<r_amo;
 float ldp=r_amo-((ld*r_amo)/100);
 cout<< "the  price for  people having member ship pass"<<ldp;
}
