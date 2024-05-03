#include<iostream>
using namespace std;

class device
{
	protected :
	string brand;
	string p_consum;
	
	public:
	void setting()
	{
		cout << "enter the brand name : ";
		getline(cin,brand);
		cout << "enter the power consumption :";
		getline(cin,p_consum);	
	}	
	void getting()
	{
		cout << "brand name :" << brand << endl;
		cout << "Power consumption :" << p_consum << endl;
	}
};

class laptop : public device
{
	public :
	void dispaly()
	{
		cout << "Laptop!";
	}
};

class smartPhone : public device
{
	public :
	void dispaly()
	{
		cout << "smartphone!";
	}
};

int main()
{
	device d;
	d.setting();
	d.getting();
	
	cout << endl << endl ;
	
	laptop l;
	l.dispaly();
	cout << endl;
	l.setting();
	l.getting();
	
	cout << endl << endl ;
	
	smartPhone p;
	p.dispaly();
	cout << endl;
	p.setting();
	p.getting();
	
	
	return 0;
}
