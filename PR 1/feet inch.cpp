#include<iostream>
using namespace std;

class feet_inch
{
 	public :
	 int feet , inch;
	 int F=12, I=0;
	 
	 
	 void setter()
	 {
		cout << "Enter the feet :" ;
		cin >> feet;
		cout << "Enter the inch :" ;
		cin >> inch;	 	
	 }	
	 
	 void show()
	 {
	 	int i;
	 	for(i=1; i<=inch; i++)
	 	{
	 			if(inch>=F)
				{
					
					if(i==F)
					{
						F+=12;
						feet+=1;
					}
				}
				else
				{
					I+=1;
				}
		}
	 }
	 
	 void getter()
		{
			cout << "feet : " << feet << endl << "inch : " << I;
		}

};
int main()
{
	feet_inch f1,f2;
	
	f1.setter();
	f1.show();
	f1.getter();
	
	cout << endl;
	
	f2.setter();
	f2.show();
	f2.getter();
	
	int n = f1.feet + f2.feet;
	int m = f1.I + f2.I;
	
//	cout << endl << endl << "feet : " << n << endl << "inch : " << m;
	cout << endl << "feet : " << n << endl << "inch :" << m;

	return 0;
}
