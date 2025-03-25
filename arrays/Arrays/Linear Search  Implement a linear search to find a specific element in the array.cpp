/*Linear Search:* Implement a linear search to find a specific element in the array.
*/

#include<iostream>
using namespace std;
int main()
{    	
		string demand;
		int garage=-1;
		cout<< "Ferrari F8 Tributo \n, Lamborghini Huracan \n, McLaren_720S \n, Chevrolet Corvette Stingray \n, Porsche911 Turbo S \n, Rolls-Royce Ghost \n, Bentley Continental GT  \n, Mercedes-Benz S-Class \n, BMW7 Series \n, Audi A8 \n";
		string cars[10]={ "Ferrari F8 Tributo",
        "Lamborghini Huracán",
        "McLaren 720S",
        "Chevrolet Corvette Stingray",
        "Porsche 911 Turbo S",
        "Rolls-Royce Ghost",
        "Bentley Continental GT",
        "Mercedes-Benz S-Class",
        "BMW 7 Series",
        "Audi A8"};
		cout<<"\n\n\n\n Enter the number you want to find ";
		getline(cin,demand);
		
		for(int i=0;i<10;i++)
		{
			if(cars[i]==demand)
			{
				garage=i;
			
			}
			
		
		}
			if(garage !=-1)
				{	cout<<"The "<<demand<<"  is available and present in "<<" garage number "<<garage;
			
				
			}
			else
			{
				cout<<"This "<<demand<< " is currently unavillabe";
			}







	
}
