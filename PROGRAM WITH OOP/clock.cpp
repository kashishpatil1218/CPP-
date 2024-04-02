#include<iostream>
using namespace std;

class time 
{
	 public :
	 int sec;
	 
	 void day(int sec)
	 {
		int i,a=0,b=0,c=0;
		int s=60,h=3600,d=86400;
		
		for(i=1; i<=sec; i++)
		{
			if(i==s)
			{
				a+=1; 
				s+=60;
				
				if(i==h)
				{
					c+=1;
					h+=3600;
					
					if(i==d)
					{
						b+=1;
						d+=86400;
					}
				}
			}
    	}
		
		cout << "day :" << b << endl << "hours : " << c << endl << "min : " << a << endl << "sec : " << sec;	 	
	 }	
};

int main()
{
	time t1;
	
	cout << "Enter seconds :";
	cin >> t1.sec;
	
	t1.day(t1.sec);
	
	return 0;
}
