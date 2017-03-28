#include <string>
#include <vector>
#include <iostream>
#include "Robot_part.cpp"

using namespace std;

class Robot_model
{
	private:
/*		string name;
		int model_number;
		Robot_part torso;
		Robot_part head;
		Robot_part locomotor;
		Robot_part arm;
		Robot_part battery;
*/
	public:
		double cost();
		double max_speed();
		double max_battery_life();
};
