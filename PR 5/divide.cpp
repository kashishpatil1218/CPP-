#include<iostream>
using namespace std;

class divide
{
   protected :
   int a,b;
   public :
   
   void getter()
   {
		cout << "Enter a :";
		cin >> a;
		cout << "Enter b :";
		
		try
		{
			cin >> b;   
			if (b==0)
			{
				throw 12.90;	
			}	
			else
			{
				cout << a/b << endl;
			}
		}
		catch(int c)
		{
			cout << "This value is note divide by 0 !" << b << endl << endl;
		}
		catch (...)
		{
			cout << "Error !"<< endl ;
		}
	 }	
};
int main()
{
	divide d1;
	d1.getter();
	return 0;
}
