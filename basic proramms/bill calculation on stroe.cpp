 #include<iostream>
using namespace std;

int main (){
	int buget;

    cout<<"Enter your buget =";
    cin>>buget;
    cout<<"Tell me name of you product:"<<endl;
    int jecket=4000,t_shirt=1500,shoes=2000,null=0;
    cout<<"Tell me name of your product:"<<endl;
    cout<<"Tell me name of your product:"<<endl;
     int total=jecket+t_shirt+shoes;
    int remaining=total-buget;
    if (total==buget){
    	cout<<"Thanks for buying our product:"<<buget;
    	
	}
    if (total>buget){
    	cout<<"Sorry but the total amount is greater than you buget";
    
	}
	if(total<buget)
    {
	cout<<"Thanks for buying ,  amount in return is:"<<remaining;
	}
	cout<<"--------------------------------------------------------------------"<<endl;
	cout<<"COME BACK SOON______________________";
	
    
	
    
	
	

}
