#include<iostream>
using namespace std;
int main()
{
	//leap year array
	int first,last;
	cout << "enter the first year :" ;	
	cin >> first;
	cout << "enter the last year :" ;	
	cin >> last;
	
	int i;
	for(i=first; i<=last; i=i+4)
	{
		cout <<" " << i;	
	}
	
}
