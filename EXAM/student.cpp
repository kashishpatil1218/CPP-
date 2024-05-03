#include<iostream>
using namespace std;

class  student
{
	string name;
	int r_num;
	 
	public :
	
	student(string name, int r_num)
	{
		this->name=name;
		this->r_num=r_num;	
	}	
	void get()
	{
		cout << "student name :" << name << endl;
		cout << "Roll num :" << r_num << endl;
	}

};
int main()
{
	student s[2]={{"kashish",18},{"deep",20}};
	
	s[0].get();
	s[1].get();
	

	return 0;
}
