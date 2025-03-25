#include<iostream>
 using namespace std;

 int main (){
    int age;
	cout<<"What is your age";
	cin>>age;
	if(age<18){
      cout<<"you are not eligible for id card"<<endl;
  	}
	else if(age==18){
	    cout<<"you are eligible but not for passport"<<endl;	
	}
	else{
        cout<< "Congratulation's you are eligible"<<endl;
	}
	return 0;
}

