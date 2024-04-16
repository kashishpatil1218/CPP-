#include<iostream>
using namespace std;
class input
{
  public:
  int a;
  void setter()
  {
    cout << "Enter the value of a : ";
    cin >> a;
  }
};
class square : public input
{
   public:
   void getter()
   {
     cout<<" square is : "<< a*a << endl;
   }
};

class cube :public input
{
   public:
   void getter1()
   {
     cout << "cube is :" << a*a*a << endl;
   }

};
 int main()
{
   cube c1;
   square s1;

   s1.setter();
   s1.getter();
   
   c1.setter();
   c1.getter1();
   
   return 0;
   


}
