#include<iostream>
using namespace std;

class A
{  
    protected:
	float n =20;

};
class B
{   
    protected:
	float n =30;
};
class C : public A , public B
{   
   
   public:
   	void setter()
   	{
   		cout << A :: n << endl;
   		cout <<B  :: n;
	}
	

};
int main()
{
 	C s1;
 	s1.setter();
	return 0;
}


