#include<iostream>


using namespace std;
int main(){
    int age;
    string city,name;
    cout<<"What is your name.";
    getline(cin,name);
    
    cout<<"What is your Home town name.";
    cin>>city;
    
    cout<<"What is your age:"<<endl;
    cin>>age;
    
    cout<<"\nYour name is :"<<name<<endl;
    cout<<"\nYour home city name is:"<<city;
    cout<<"\nYour age is:"<<age;
    

}
