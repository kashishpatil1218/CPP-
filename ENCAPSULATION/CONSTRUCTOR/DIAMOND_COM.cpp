#include<iostream>
#include<string>
using namespace std;

	//- comp_id
	//- comp_name
	//- comp_staff_quantity
	//- comp_revenue (per year)
	//- comp_import_raw_diamonds (no. of raw diamondsimported per year)
	//- comp_export_diamonds (no. of diamonds per year)
	//- comp_ceo (name of CEO of the company)
	class com
	{
	   private :
	   int com_id;
	   string com_name;
	   int com_staff_quantity;
	   string com_revenue;
	   int com_imp_diamond;
	   int com_ex_diamond;	
	   string com_c_ceo;
	   
		public :
			com(int id, string name, int staff_quantity,string revenue,int imp_diamond,int ex_diamond,string c_ceo)
			{
				com_id=id;
				com_name=name;
				com_staff_quantity=staff_quantity;
				com_revenue=revenue;
				com_imp_diamond=imp_diamond;
				com_ex_diamond=ex_diamond;
				com_c_ceo=c_ceo;
				
			}
			
			void getter()
			{
				cout << "Company ID                      :" << com_id << endl;
				cout << "Company Name                    :" << com_name << endl;
				cout << "Company staff quantity          :" << com_staff_quantity << endl;
				cout << "Company revenue                 :" << com_revenue << endl;
				cout << "Company Import diamond          :" << com_imp_diamond << endl;
				cout << "Company Export diamond          :" << com_ex_diamond << endl;
				cout << "CEO of Company                  :" << com_c_ceo << endl << endl;
			}
	};
	
	int main()
	{
		com D(10,"diamond_merchant",200,"$10,00,000",10000,50000,"kashish");
		D.getter();
		return 0;
	}
