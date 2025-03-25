#include<iostream>
using namespace std;
//treavel insurance premium

int main(){
	string destination;
    int duration;
	string medical_history;
     	 cout<<"Tell us your destination (International Or Domastic) :";
      	cin>>destination;
      	cout<<"Tell us the duration in Day's :";
      	cin>>duration;
    	cout<<"Tell us Your Medical history :";
      	cin>>medical_history;
      
      	if(destination=="international" )
      	{
      	  if(duration>15)
      	  {
      	      if(medical_history=="pre_existing")
			  {
				cout<<"Premium =300$ ";
			  }
			        else
			     {
				cout<<"Premium =200$ ";
			     }	
      	  	
		  }
      	  
      	  else if(duration<=15)
      	  {
      		  if(medical_history=="pre_existing")
			  {
				cout<<"Premium =250$ ";
			  }
			        else
			    {
				cout<<"Premium =150$ ";
			    }
		
		  }
		  
		}
		  else if (destination=="domestic")
		  {
			  if(duration>7)
			  {
				cout<<"Premium =100$";
		   	  }
			        else
			    {
				cout<<"Premium =50$ ";
			    }
		}
      	
      	else
		  {
      		cout<<"Invalid Destination";
		  }
      	
      	
      	
      	
      	
      	
	    








}
