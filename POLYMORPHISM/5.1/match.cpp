#include<iostream>
using namespace std;

class A  
{
	protected :
	int over;
	
	public :
		void cricket(int over)
		{
			this->over = over;
			cout  << " Over : " << over << endl;
		}
		
};
class B : public A
{
	    public :
		void cricket(int over)
		{
			this->over = over;
			cout  << " T20 : " << over << endl;
		}
};

class C: public A
{
		public :
		void cricket(int over)
		{
			this->over = over;
			cout  << " ODI : " << over << endl;
		}
};
 int main()
{
	B b;
	b.cricket(20);
	
	C c;
	c.cricket(50);
	
	return 0;
	
}
