#include<iostream>
using namespace std;

class A
{  
    protected:
	int a ,a1,a2;
	public:
	void SBI ()
	{
		cout<< "Enter the intrest rate of SBI : " ;
		cin>>a;
    }
    void BOB ()
	{
		cout<< "Enter the intrest rate of BOB : " ;
		cin>>a1;
    }
    void ICICI ()
	{
		cout<< "Enter the intrest rate of ICICI : " ;
		cin>>a2;
    }
	
};
class S:public A
{      
        public:
        	
        	void get()
        	{
        		SBI();
        		cout << " SBI : "<< a << endl ;
        	}
};
class B :public A
{      
        public:
        
        	void get1()
        	{
        		BOB();
        		cout << " bob : " << a1 << endl ;
			}
};
class I:public A
{
    public:
    
    void get2()
    {
    	ICICI();
    	cout << " icici" << a2 << endl ;
	}
   
 	
};

int main()
{
	S s1;
	s1.get();
	B s2;
	s2.get1();
	I s3;
	s3.get2();
  
  return 0;
}



