#include<iostream>
using namespace std;

	//- cust_id
	//- cust_name
	//- cust_age
	//- cust_city
	//- cust_mobile_number
	//- cust_simcard_validity (in years)
	//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
	
	class cust
	{
		private :
		int id;
		char name[20];
		int age;
		char city[20];
		double m_num;
		int sim_val;
		char sim_brand[20];
		public:
		void input()
		{
			cout << "Enter ID :";
			cin >> id;
			cout << "Enter name :";
			cin >> name;
			cout << "Enter age :";
			cin >> age;
			cout << "Enter city :";
			cin >> city;	
			cout << "Enter m_num :";
			cin >> m_num;	
			cout << "Enter sim_val :";
			cin >> sim_val;
			cout << "Enter sim_brand :";
			cin >> sim_brand;
			
			cout << endl;
		}	
		
		void output()
		{
			cout << "----------------------" << endl;
			cout << "Customer ID :" << id << endl;
			cout << "Customer name :" << name << endl;
			cout << "Customer age :" << age << endl;
			cout << "Customer city :" << city << endl;
			cout << "Customer m_num :" << m_num << endl;
			cout << "Customer sim_val :" << sim_val << endl;
			cout << "Customer sim_brand :" << sim_brand << endl << endl;;
			
		}
	};
int main()
{
	cust c1,c2,c3,c4,c5;
	
	c1.input();
	c2.input();
	c3.input();
	c4.input();
	c5.input();
	
	c1.output();
	c2.output();
	c3.output();
	c4.output();
	c5.output();
	return 0;
}
