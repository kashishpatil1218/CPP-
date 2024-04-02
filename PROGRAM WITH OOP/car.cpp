#include<iostream>
using namespace std;


	//- car_id
	//- car_company_name
	//- car_color
	//- car_model
	//- car_release_year
	
	
class car
{
	public:
		int id;
		char com_name [100];
		char c_color[100];
		char c_model[100];
		int c_r_year;
		
	void input()
	{
		cout << "Enter Id :";
		cin >> id;
		cout << "Enter com_name :";
		cin >> com_name;
		cout << "Enter c_color :";
		cin >> c_color;
		cout << "Enter c_model :";
		cin >> c_model;
		cout << "Enter c_r_year :";
		cin >> c_r_year;
		
		cout<< endl ;
	}
	
	void output()
	{
		cout << "Id :" << id << endl;
		cout << "com_name :" << com_name << endl;
		cout << "c_color :" << c_color << endl;
		cout << "c_model:" << c_model << endl;
		cout << "c_r_year :" << c_r_year << endl << endl;
	}
		
};

int main()
{
	
	car c1,c2,c3,c4;
	
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	
	return 0;
}
