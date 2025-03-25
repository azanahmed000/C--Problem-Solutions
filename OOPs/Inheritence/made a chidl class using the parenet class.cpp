/*Made aa praent  class and child  class using inheritence  
*/
#include<iostream>
using namespace std;
class move
{
	protected:
		int position;
		public: 
		move()
		{
			position=0;
		}
		void forword()
		{
			position++;
			
		}
		void show()
		{
			cout<<"Position = "<<position<<endl;
			
		}
};
//it is the child class

class move2:public move
{
	public :
		void backward()
		{
			position--;
			
		}
};
int main()
{
	move2 m;
	m.show();
	m.forword();
	m.show();
	m.backward();
	m.show();
	
}
