#include "Order.cpp"
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <Fl/Fl_Menu_Bar.H>
#include <Fl/Fl_Double_Window.H>
#include <Fl/fl_ask.H>
#include <Fl/Fl_Input.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Return_Button.H>
#include <Fl/Fl_Button.H>


using namespace std;

class Shop
{
	private:
		Order orders;
		vector<Robot_part> robot_parts;
		Robot_model robot_models;
		Customer customers;
		Sales_associate sales_associates;
		
	public:
		void create_new_robot_part(vector<Robot_part>& rob);
		void create_new_robot_model();
		void create_new_customer();
		void create_new_sales_associate();
		void create_new_order();
		void save(string filename);
		void open(string filename);
                int number_of_robot_parts();
                void list_Robot_Parts();

};

