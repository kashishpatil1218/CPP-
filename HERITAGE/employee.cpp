#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
	int id;
	string name;
	string role;
	int salary;
	int experiance;
	string com_name;
	string add;
	string email;
	double m_num;
	
	void setter1()
	{
		cout << "Enter ID :";
		cin >> id;
		cin.ignore();
		cout << "Enter name :";
		getline(cin,name);
		
		cout << "Enter role :";
        getline(cin,role);
//		
	}	
};

class B : public A
{
	public :
	void setter2()
	{
		setter1();
		cout << "Enter salary :";
		cin >> salary;
		cout << "Enter experiance:";
		cin >> experiance;	
	}	
};

class C : public B
{
	public :
	void setter3()
	{
		setter2();
		cin.ignore();
		cout << "Company name :";
		 getline(cin,com_name);
		cout << "Company address :";
		 getline(cin,add);
	}
	
	void getter()
	{
		cout << "name : " << name << endl ;
		cout << "role : " << role << endl;
		cout << "salary : " << salary << endl ;
	}
	
	 	
};
class D : public C
{
	public:
	void setter4()
	{
		setter3();
		cout << "Email :";
		 getline(cin,email);
		cout << "Contact :";
		cin >> m_num;
	}
	
	void getter2()
	{
		cout << "ID :" << id << endl;
		cout << "name : " << name << endl ;
		cout << "role : " << role << endl;
		cout << "salary : " << salary << endl ;
		cout << "experiance : " << experiance << endl ;
		cout << "Company_name : " << com_name << endl;
		cout << "address : " << add << endl ;
		cout << "Email :" << email << endl;
		cout << "Contact :" << m_num << endl;
	}	
};
int main()
{
	
	D d1;
	d1.setter4();
	d1.getter2();
	return 0;
}
