#include<iostream>
using namespace std;

	//- cafe_id
	//- cafe_name
	//- cafe_type (like a rooftop or normal)
	//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
	//- cafe_location (city name)
	//- cafe_establish_year
	//- cafe_staff_quantity
	
class cafe
{
	private:
	int id;
	char name[20];
	char c_type[20]	;
	char c_rating[20];
	char c_location[20];
	int c_E_year;
	int staff_quantity;
	
	public:
		
		cafe()
		{
			cout << "Enter cafe ID :" ;
			cin >> id;
			cout << "Enter cafe name :";
			cin >> name;
			cout << "Enter cafe type :";
			cin >> c_type;
			cout << "Enter cafe rating :";
			cin >> c_rating;
			cout << "Enter cafe location :";
			cin >> c_location;
			cout << "Enter cafe Establish year :";
			cin >> c_E_year; 
			cout << "Enter cafe staff quantity :";
			cin >> staff_quantity;
			
			cout << endl;
		}
		
		void getter()
		{
			cout << "cafe ID :" << id << endl;
			cout << "cafe name :" << name << endl;
			cout << "cafe type :" << c_type << endl;
			cout << "cafe rating :" << c_rating << endl;
			cout << "cafe location :" << c_location << endl;
			cout << "cafe Establish year :" << c_E_year << endl;
			cout << "cafe staff quantity :" << staff_quantity << endl;
			
		}
};

int main()
{
	cafe c;
	c.getter();
	return 0;
}
