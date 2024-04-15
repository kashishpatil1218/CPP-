#include<iostream>
using namespace std;

class time
{
	int sec,min=0,hour=0,s=0;
	
	public :
		
		void set()
		{
			cout << "Enter the second : ";
			cin >> sec;
		}
		
		void clock()
		{
			if(sec>=60)
			{
				min=sec / 60; 
				s=sec % 60;   
				if(min>=60)
				{ 
					hour=min / 60; 
					min=min % 60; 	
				}
			}
		}
		
		void get()
		{
			cout << "hour : " << hour << " minutes : " << min << " seconds : " << s;
		}
};

int main()
{
	time t1;
	
	t1.set();
	t1.clock();
	t1.get();
	
	
	return 0;
}
