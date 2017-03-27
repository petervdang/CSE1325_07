#include "Order.cpp"

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
		void create_new_robot_part();
		void create_new_robot_model();
		void create_new_customer();
		void create_new_sales_associate();
		void create_new_order();
		void save(string filename);
		void open(string filename);
};

