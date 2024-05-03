#include<iostream>
using namespace std;

class Animal
{
	protected :
		public :
		virtual void makeSound()=0;
		virtual void move()=0;
	
};
class lion : public Animal
{
	public :
	void makeSound()
	{
		cout << "lion voice " << endl;
	}
	void move()
	{
		cout << "lion move !" << endl ;
	}
};
class fish : public Animal
{
	public :
	void makeSound()
	{
		cout << "fish voice " << endl;
	}
	void move()
	{
		cout << "fish move !" << endl;
	}
};

int main()
{
	Animal *a[2];
	lion l;
	fish f;
	
	a[0]=&l;
	a[1]=&f;
	
	a[0]->makeSound();
	a[0]->move();
	
	a[1]->makeSound();
	a[1]->move();
	return 0;
}


