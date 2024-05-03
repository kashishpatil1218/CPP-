#include<iostream>
using namespace std;

class MathOperations
{
	int a,b;
	public :
	
	void set()
	{
		cout << "enter a : ";
		cin >>a;
		cout << "enter b :";
		try
		{
			cin >> b;
			if(b==0)
			{
				throw b;	
			}
			else
			{
				cout << a/b  << endl;
			}
		}	
		catch ( int c)
		{
			cout << "this is note divisable by zero !";
		}
		
	}	
};

int main()
{
	MathOperations m;
	m.set();
	
}
