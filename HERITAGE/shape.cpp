#include<iostream>
using namespace std;
class Shape
{
  public:
  int W,H;
  void setter()
  {
  	cout << "Enter the Width : ";
  	cin >> W;
  	cout << "Enter the Height : ";
  	cin >> H;
  	
  }		
}; 
class Triangle : public Shape
{
	    public:
	   	int n;
		void getter1()
		 {
			n=(W*H)/2;
		 	cout << "Area of Triangle is : " << n << endl;
		 }
	
};
class rectangle : public Shape
{
    public:
	int a;

	void getter2()
	{
		a=(W*H);
		cout << "Area of Rectangle is : " << a << endl;
	}	
};
 int main()
{
	rectangle r1;
	Triangle t1;
	r1.setter();
	r1.getter2();
	t1.setter();
	t1.getter1();
	
	return 0;
	
}
