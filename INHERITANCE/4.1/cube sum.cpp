#include<iostream>
using namespace std;

class x
{
 	protected:
 		int a,b,c;
	 	
};

class y : public x
{
    	public :
    		void setter()
    		{
    			cout << "Enter the a :" ;
    			cin >> a;
    			cout << "Enter the b :" ;
    			cin >> b;
    			cout << "Enter the c :" ;
    			cin >> c;
    			
			}
			
			void getter()
			{
				cout << " cube of a :" << a*a*a << endl;
				cout << " cube of b :" << b*b*b << endl;
				cout << " cube of c :" << c*c*c << endl;
			}
};
int main()
{
	y y1;
	y1.setter();
	y1.getter();
	return 0;
}
