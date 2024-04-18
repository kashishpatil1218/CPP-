#include<iostream>
using namespace std;

class Math
{
	int a;
	public:
	void set()
	{
		cout << "Enter the value :";
		cin >> a;		
	}
	Math  operator++(int)
	{
		Math n;
		n.a=0;
		n.a=a+1;
		cout << n.a << endl;
		return n;
		
	}	
//	void get()
//	{
//		cout << a << endl;	
//	}
	
};
int main()
{
	Math m1;
	m1.set();
	m1++;
//	m1.get();
	
	return 0;
}
