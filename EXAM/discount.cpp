#include<iostream>
using namespace std;

class device
{
	protected :
	string brand;
	string p_consum;
	public :
	virtual void calculateDiscount()=0;
	
	public:
		void set()
		{
			cout << "enter the brand :";
			getline(cin,brand);
			cout << "enter the power conxumption :";
			getline(cin,p_consum);
		}
		void get()
		{
			cout << "brand " << brand << endl;
			cout << "power con :" << p_consum << endl;
		}
		
	
};

class laptop : public device
{
	public :
	void dispaly()
	{
		cout << "Laptop!";
	}
	void calculateDiscount()
	{
		cout << "dis";
	}
};

class smartPhone : public device
{
	public :
	void dispaly()
	{
		cout << "phone!";
	}
	 void calculateDiscount()
	{
		cout << "discount";
	}
	
};

int main()
{
	device *d,*d1;
	smartPhone p;
	laptop l;
	
	d=&p;
	
	d->set();
	d->get();
	d->calculateDiscount();
	d=&l;
	d1->set();
	d1->get();
	d1->calculateDiscount();
	return 0;
}
