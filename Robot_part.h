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
	protected:
		string name;
		int model_number;
		double cost;
		string description;
		string image_filename;
};
