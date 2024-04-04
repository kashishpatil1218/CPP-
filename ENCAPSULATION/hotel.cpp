#include<iostream>
using namespace std;
	//- hotel_id
	//- hotel_name -static
	//- hotel_type (like hotel or motel)
	//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
	//- hotel_location (city name)
	//- hotel_establish_year - static
	//- hotel_staff_quantity
	//- hotel_room_quantity
	
class hotel
{
 	private:
	 int id;
	 char name[20];
	 char h_type[20];
	 char h_rating[20];
	 char h_location[20];
	 int h_E_year;
	 int h_staff_quantity;
	 int h_room_quantity;
	 
	 public:
	 
	 void input()
	 {
		cout << "enter ID :";
		cin >> id;
		cout << "enter name :";
		cin >> name;
		cout << "enter h_type:";
		cin >> h_type;
		cout << "enter h_rating :";
		cin >> h_rating;
		cout << "enter h_location :";
		cin >> h_location;
		cout << "enter h_E_year :";
		cin >> h_E_year ;
		cout << "enter h_staff_quantity:";
		cin >> h_staff_quantity ;
		cout << "enter h_room_quantity:";
		cin >> h_room_quantity ;
		
		cout << endl; 	
	}
	
	void output()
	{
		cout << "Hotel ID :" << id << endl;
		cout << "Hotel name :" << name << endl;	
		cout << "Hotel type :" << h_type << endl;	
		cout << "Hotel rating :" << h_rating << endl;
		cout << "Hotel location :" << h_location << endl;
		cout << "Hotel E_year :" << h_E_year << endl;
		cout << "Hotel staff_quantity :" << h_staff_quantity << endl;
		cout << "Hotel room_quantity :" << h_room_quantity << endl << endl;
	}	
};

int main()
{
	hotel h[2];
	
	int i;
	for(i=0; i<2; i++)
	{
		h[i].input();
		h[i].output();
	}
	return 0;
}

