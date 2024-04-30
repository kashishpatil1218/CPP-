#include<iostream>
using namespace std;

class  math 
{
 	protected:
 	virtual void calculate()=0;
};
class triangle : public math
{
	int h,b;
		public :
			void calculate()
			{
				cout << "Enter value of h , b :";
				cin >> h;
				cin >> b;
				
				cout << "Area of Triangle is  A = h*b/2 :" << h*b/2 << endl << endl;
			}
};
class  circle : public math
{
	const float pi=3.14;
	int r;
	public :
	void calculate()
	{
		        cout << "Enter value of pi , r :";
				cin >> r;
				
				cout << "Area of Circle is  A = pi*r*r :" << pi*r*r << endl << endl;
	}	
};

class rectangle  : public math
{
	int w,l;
	public :
	void calculate()
	{
		        cout << "Enter value of w,l :";
				cin >> w >> l;
				
				cout << "Area of rectangle is  A = w*l :" << w*l << endl << endl;
	}	
};

int main()
{
	triangle t1;
	t1.calculate();
	
	circle c1;
	c1.calculate();
	
	rectangle r1;
	r1.calculate();
		return 0;
}
