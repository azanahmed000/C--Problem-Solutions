#include<iostream>
using namespace std;

int main(){
	int memory,space,cpu;
	cout<<"Mention the memory usage of system:";
	cin>>memory;
	cout<<"\nMention the CPU usage of system:";
	cin>>cpu;
	cout<<"\nMention the Disk space of system:";
	cin>>space;
	
	if(memory>75)
	{
		cout<<"\n\n*Warning:High memory usage!"<<endl;
		
	}
	if(cpu>85)
	{
		cout<<"*Warning:High CPU usage!"<<endl;
	}
	if(space>90)
	{
		cout<<"*Warning:Low disk space!"<<endl;
	}
	if(memory<75,cpu<85,space<90)
	{
		cout<<"\n\n\n\n----------System health is optimal";
	}
}
