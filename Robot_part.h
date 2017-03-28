#include <string>
#include <vector>
#include <iostream>
#include "Arm.cpp"
#include "Battery.cpp"
#include "Torso.cpp"
#include "Locomotor.cpp"
#include "Head.cpp"

using namespace std;

class Robot_part
{
	private:
		string name;
		int model_number;
		double cost;
		string description;
		string image_filename;
		string type;

	public:
		Robot_part(string _name, int _model_number, double _cost, string _description, string _type) : name(_name), model_number(_model_number), cost(_cost), description(_description), type(_type) {}


                string getName() const;
                int getModel_number() const;
                double getCost() const;
                string getDescription() const;
                string getImage_filename() const;
                string getType() const;

};
