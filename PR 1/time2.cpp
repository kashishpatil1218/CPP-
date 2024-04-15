#include<iostream>
using namespace std;

class time
{
	int sec,min,hour,s=0;
	
	public :
		
		void set()
		{
			cout << "enter hour : ";
			cin >> hour;
			cout << "enter min : ";
			cin >> min;
			cout << "enter sec : ";
			cin >> sec;
		}
		
		void clock()
		{
			if(sec>=60)
			{
				int temp_min;
				temp_min = sec / 60; 
				min = min + temp_min;
				s=sec % 60;  
			}
			if(sec>=60)
			{
				int temp_hour;
				temp_hour = min / 60; 
				hour = hour + temp_hour;
				min=min % 60; 
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
