 #include<iostream>
using namespace std;

int main (){
	int buget;
    string jecket,t_shirt,shoes,null;
    int pjecket,pt_shirt,pshoes,pnull;
    int qjecket,qt_shirt,qshoes,qnull;
    cout<<"Enter your buget =";
    cin>>buget;
    cout<<"Name of your product:";
    cin>>jecket;
    cout<<"Price of product:";
	cin>>pjecket;    
    cout<<"Tell me quantity of your :"<<endl;
    cin>>qjecket;
    
     cout<<"Name of your product:";
    cin>>t_shirt;
    cout<<"Price of product:";
	cin>>pt_shirt;    
    cout<<"Tell me quantity of your :"<<endl;
    cin>>qt_shirt;
    
     cout<<"Name of your product:";
    cin>>shoes;
    cout<<"Price of product:";
	cin>>pshoes;    
    cout<<"Tell me quantity of your :"<<endl;
    cin>>qshoes;
    
    int jj=pjecket*qjecket,ts=pt_shirt*qt_shirt,s=pshoes*qshoes;
     int total=jj+ts+s;
    int remaining=buget-total-;
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
