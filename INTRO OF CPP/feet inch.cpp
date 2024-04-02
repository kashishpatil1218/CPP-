#include<iostream>
using namespace std;

int main()
{ 
 
	int feet;
	float inch;
	cout << "enter the feet :";
	cin >> feet;
	cout << "enter the inches :";
	cin >> inch;
	
	cout <<"feet:" << " " <<  feet << endl <<"inches:" << " " << inch/10 << endl;
	
	return 0;
}
