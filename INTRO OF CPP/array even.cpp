#include<iostream>
using namespace std ;
int main()
{
	//Q.1 Write a Program to find all even elements from a given 1D array.
	
	int n;
	cout<< "enter value of n :";
	cin>> n;
	
	int a[n];
	int i;
	for(i=0; i<n; i++)
	
	{
		cout<<"enter a["<<i<<"] :";
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	
	{
		if(a[i]%2==0)
		{
			cout << "even elements of array :" << a[i] << endl;
		}
	}
	
	return 0;
}
