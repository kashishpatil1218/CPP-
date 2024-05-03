#include<iostream>
using namespace std ;

class Employee
{
	int age,age2;
		public :
		void set()
		{
			cout << "enter 1st employee age :" ;
			cin >> age;
			cout << "enter 2nd employee age :" ;
			cin >> age2;
		}
		Employee operator-(Employee k)
		{
			Employee temp;
			temp.age=this->age-k.age;
			temp.age2=this->age2-k.age2;
			
			return temp;
		}
		void get()
		{
			cout << "Employee 1 " << age << endl;
			cout << "Employee 2 " << age2 << endl;
		}
		
};
int main()
{
	Employee e1,e2,e3;
	
	e1.set();
	cout << endl;
	
	e2.set();
	cout << endl;
	
	e3=e1-e2;
	e3.get();
}
