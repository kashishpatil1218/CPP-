#include<iostream>
using namespace std;

class Message
{
 	string a1;
	 public:
	 string a2;
	 
	 Message()
	 {
		cout << "Enter the a1 :";
		cin >> a1;
		a2=a1; 	
	 }	
	 
	 void print()
	 {
	 	cout << a1 << endl;
	 }
	 
	 void print(string temp)
	 {
	 	cout << a1 << " " << temp << endl;
	 }
};

int main()
{
	Message m1;
	m1.print(m1.a2);
	return 0;
}

