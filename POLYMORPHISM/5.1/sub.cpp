#include<iostream>
using namespace std;

class Pro
{
	int a,b,c,d,e;
	public :
		
		void calculate(int a, int b)
		{
			int i = a / b;
			cout << "Division for a / b  : " << i << endl;
		}
		
		void calculate(int a, int b,int c)
		{
			int j = a - b - c;
			cout << "Subtraction for a - b - c : " << j << endl;
		}
		
		void calculate(int a, int b, int c,int d)
		{
			int k= a * b * c * d;
			cout << "Multiplication for a * b * c * d : " << k << endl;
		}
		
		void calculate(int a, int b, int c, int d, int e)
		{
			int l = a + b + c + d + e;
			cout << "Addition for a + b + c + d + e : " << l << endl;
		}		
};

int main()
{
	Pro p1;
	
	p1.calculate(1,2);
	p1.calculate(1,2,3);
	p1.calculate(1,2,3,4);
	p1.calculate(1,2,3,4,5);
	
	return 0;
}
