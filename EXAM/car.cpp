#include<iostream>
using namespace std;

class car
{
	string model;
	int year;
	double speed;
	
	public :
	
	void set()
	{
		cout << "enter the car model :" ;
		getline(cin,model);
		cout << "enter the yera :";
		cin >> year;
		cout << "Enter the speed :";
		cin >> speed;	
	}	
	void get()
	{
		cout << "car model :" << model << endl;
		cout << "year :" << year << endl;
		cout << "speed :" << speed << endl;
	}
};

int main()
{
	car c;
	c.set();
	c.get();
	return 0;
}
