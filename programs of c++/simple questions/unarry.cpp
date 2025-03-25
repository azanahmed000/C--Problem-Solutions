#include<iostream>

using namespace std;

main()
{
int x=20,y=35;

x=y++ + ++x;

y=++y + ++x;

cout<<x<<y;

}
