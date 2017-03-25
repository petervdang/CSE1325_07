#include <string>
#include <vector>
#include <iostream>
#include "Robot_model.cpp"
#include "Customer.cpp"
#include "Sales_associate.cpp"

using namespace std;

class Order
{
	private:
		int order_number;
		string date;
		Customer customer;
		Sales_associate sales_associate;
		Robot_model robot_model;
		int Status;

	public:
		double robot_cost();
		double extended_price();
};
