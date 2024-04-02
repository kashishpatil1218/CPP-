#include<iostream>
using namespace std;

// 	-emp_id
//	- emp_name
//	- emp_age
//	- emp_role
//	- emp_salary
//	- emp_city
//	- emp_experience
//	- emp_company_name


class Emp
{
	public:
		int id;
		char name[50];
		int age;
		char role[100];
		int salary;
		char city[50];
		int exp;
		char c_name[100];
		
	void input()
	{
		cout << "Enter Employee ID :";
		cin >> id;
		cout << "Enter Employee name :";
		cin >> name;
		cout << "Enter Employee age :";
		cin >> age;
		cout << "Enter Employee role :";
		cin >> role;
		cout << "Enter Employee salary :";
		cin >> salary;
		cout << "Enter Employee city :";
		cin >> city;
		cout << "Enter Employee exp :";
		cin >> exp;
		cout << "Enter Employee c_name :";
		cin >> c_name;
		
		cout << endl;
	}
	
	void output()
	{
		cout << "Employee ID     :" << id 	  << endl;
		cout << "Employee name   :" << name   << endl;
		cout << "Employee age    :" << age    << endl;
		cout << "Employee role   :" << role   << endl;
		cout << "Employee salary :" << salary << endl;
		cout << "Employee city   :" << city   << endl;
		cout << "Employee exp    :" << exp    << endl;
		cout << "Employee c_name :" << c_name << endl << endl;
		
		
		
	}
		
};

int main()
{
	Emp e1,e2,e3,e4,e5;
	
	e1.input();
	e2.input();
	e3.input();
	e4.input();
	e5.input();
	
	e1.output();
	e2.output();
	e3.output();
	e4.output();
	e5.output();
	return 0;
}
