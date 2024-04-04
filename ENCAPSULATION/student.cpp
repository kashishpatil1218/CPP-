#include<iostream>
using namespace std;

	//- stu_id
	//- stu_name
	//- stu_age
	//- stu_course
	//- stu_city
	//- stu_email
	//- stu_college
	
	class stu
	{
	    private:
	    	
		int id;
		char name[20];
		int age;
		char course[20];
		char city[20];
		char mail[30];
		char c_name[50];
		public:
		void input()
		{
			cout << "Enter ID :";
			cin >> id;
			cout << "Enter name :";
			cin >> name;
			cout << "Enter age :";
			cin >> age;
			cout << "Enter course :";
			cin >> course;
			cout << "Enter city :";
			cin >> city;
			cout << "Enter mail :";
			cin >> mail;
			cout << "Enter c_name :";
			cin >> c_name;
			
			cout << endl;
		}
		
		void output()
		{
			cout << "---------------------------" << endl;
			cout << "student id :" << id << endl;
			cout << "student name :" << name << endl;
			cout << "student age :" << age << endl;
			cout << "student course :" << course << endl;
			cout << "student city :" << city << endl;
			cout << "student mail :" << mail << endl;
			cout << "student c_name :" << c_name << endl << endl;
		}
	};
	
int main()
{
	stu s1,s2,s3,s4,s5;
	
	s1.input();
	s2.input();
	s3.input();
	s4.input();
	s5.input();
	
	s1.output();
	s2.output();
	s3.output();
	s4.output();
	s5.output();
	
	return 0;
}
