#include<iostream>

using namespace std;

int main(){
    int x,y;
    cout<<"Enter the value of both integer=";
    cin>>x        >>y;
    
    cout<<"\n VALUE OF BOTH INTEGER BEFORE SWAPPING IS ="<<x<<"{      }"<<y;
    x=x+y;
    y=x-y;
    x=x-y;
    
    cout<<"\nThe values after swapping is:"<<x<<"{      }"<<y;


}
