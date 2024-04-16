#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	void seta()
	{
		cout << "Enter the a :";
		cin >> a;
	}
};
class B : public A
{
	protected:
		int b;
	void setb()
	{
		seta();
		cout << "enter the num b :";
		cin >> b;
	}
};
class C : public A
{
	protected:
		int c;
	void setc()
	{
		cout << "enter the num c : ";
		cin >> c;
	}
};
class D : public B , public C
{
	public :
		int d;
		void setd()
		{
			setb();
			setc();
			cout << "Enter the d:";
			cin >> d;	
		}
		void get()
		{
			cout << "sum:" << B::a*b*c*d;	
		}
};
int main()
{
	D d;
	d.setd();
	d.get();
	
	return 0;
}
