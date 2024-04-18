#include<iostream>
using namespace std;
class math
{
	int a,b;
	public:
		void setter()
		{
			cout << "Enter the value :";
			cin >> a;
		}
		void getter()
		{
			if(a>b)
			{
				cout << a  << ":"<< "m1 is maximum ! "  << endl;
			}
			else
			{
				cout << b << ":" << "m2 is maximum !  "  << endl;
			}
		}	
		math operator<(math m2)
		{
			math temp;
			
			temp.b=m2.a;
		   	temp.a=this->a;
		   	return temp;	
		}
		
};
int main()
{
	math m1,m2,m3;
	m1.setter();
	m2.setter();
	m3=m1<m2;
	m3.getter();
	return 0 ;
}


