#include<iostream>
using namespace std;

class divide
{
	protected :
	int a,b;
	public :
	
	void getting()
	{
		cout << "Enter a:";
		cin >> a;
		cout << "ENter b :";
		
		try
		{
			cin >> b;
			if(b==0)
			{
				throw b;	
			}	
			else
			{
				cout << a/b << endl;
			}
		}
		catch(int c)
		{
			cout << "This value can't divide by 0 !" << endl << endl;
		}
	}	
};
class vote
{
	protected :
		int v;
		public :
			void get()
			{
				cout << "Enter v :";
				try
				{
					cin >> v;
					if(v<=18)
					{
						throw v ;		
					}	
					else
					{
						cout << "Eligible for voting !" << v << endl << endl;
					}
				}
				catch(int v)
				{
					cout << "You are not eligible for voting !" << endl ;
				}
				
			}
};

int main()
{
	divide d1;
	d1.getting();
	
	vote v1;
	v1.get();

	
	return 0;
}
