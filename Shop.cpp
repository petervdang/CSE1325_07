#include "Shop.h"

using namespace std;

void create_robot_partCB(Fl_Widget* w, void *p, vector<Robot_part>& robot_parts);
void cancel_robot_partCB(Fl_Widget* w, void *p);


class Robot_Part_Dialog
{
	public:
		Robot_Part_Dialog()
		{
			dialog = new Fl_Window(340,270, "Robot Part");
			rp_name = new Fl_Input(120,10,210,25,"Name");
			rp_name -> align(FL_ALIGN_LEFT);

			rp_part_number = new Fl_Input(120,40,210,25, "Part Number:");
			rp_part_number -> align(FL_ALIGN_LEFT);
		
			rp_type = new Fl_Input(120,70,210,25, "Type:");
			rp_type -> align(FL_ALIGN_LEFT);

			rp_weight = new Fl_Input(120,100,210,25, "Weight:");
			rp_part_number -> align(FL_ALIGN_LEFT);
			
			rp_cost = new Fl_Input(120,130,210,25, "Cost:");
			rp_cost -> align(FL_ALIGN_LEFT);
		
			rp_description = new Fl_Multiline_Input(120,160,210,75, "Description:");
			rp_description -> align(FL_ALIGN_LEFT);

			rp_create = new Fl_Return_Button(145,240,120,25, "Create");
			rp_create -> callback((Fl_Callback *)create_robot_partCB, 0);
	
			rp_cancel = new Fl_Button(270,240,60,25, "Cancel");
			rp_cancel -> callback((Fl_Callback *)cancel_robot_partCB, 0);

			dialog -> end();
			dialog -> set_non_modal();
		}

		void show() {dialog -> show();}
		void hide() {dialog -> hide();}
		string name() {return rp_name -> value();}
		string part_number() {return rp_part_number-> value();}
		string type() {return rp_type -> value();}
		string weight() {return rp_weight -> value();}
		string cost() {return rp_cost -> value();}
		string description() {return rp_description -> value();}


        private:
                Fl_Window *dialog;
                Fl_Input *rp_name;
                Fl_Input *rp_part_number;
                Fl_Input *rp_type;
                Fl_Input *rp_weight;
                Fl_Input *rp_cost;
                Fl_Input *rp_description;
                Fl_Return_Button *rp_create;
                Fl_Button *rp_cancel;

};

Robot_Part_Dialog *robot_part_dlg;

void create_robot_partCB(Fl_Widget *w, void *p, vector<Robot_part>& robot_parts)
{
	string result = "### Creating robot part\n";
	result += "Name       : " + robot_part_dlg->name() + '\n';
	result += "Part #     : " + robot_part_dlg->part_number() + '\n';
	result += "Type       : " + robot_part_dlg->type() + '\n';
	result += "Weight     : " + robot_part_dlg->weight() + '\n';
	result += "Description: " + robot_part_dlg->description() + '\n';
	robot_part_dlg->hide();
	fl_message(result.c_str());

        string name = robot_part_dlg->name();
        string buffer = robot_part_dlg->part_number();
        int model_number = atoi(buffer.c_str());
        buffer = robot_part_dlg->type();
        double cost = atof(buffer.c_str());
        string description = robot_part_dlg->description();
/*
        Robot_part robot_part(name,model_number,cost,description,type);
        robot_parts.push_back(robot_part);
*/
}

void cancel_robot_partCB(Fl_Widget*w, void *p)
{
	robot_part_dlg -> hide();
}







int Shop :: number_of_robot_parts()
{
        return robot_parts.size();
}

void Shop :: list_Robot_Parts()
{
	string message = "";
	string input;
	input = fl_input("Which Type?");
	
        for (int i = 0; i < robot_parts.size(); i++)
        {
                if (robot_parts[i].getType() == input)
                {
                        if (robot_parts[i].getType() == "head")
                        {
                                message += robot_parts[i].getType();
				message += "\n";
                                message += robot_parts[i].getName();
                                message += "\n";
                                message += robot_parts[i].getModel_number();
                                message += "\n";
                                message += robot_parts[i].getCost();
                                message += "\n";
                                message += robot_parts[i].getDescription();
                                message += "\n";
                                message += "\n";
                        }
                }
        }

	fl_message(message.c_str());

}




void Shop :: create_new_robot_part(vector<Robot_part>& rob)
{
	string name;
	int model_number;
	string type;
	double cost;
	string description;
	string buffer;

        name = fl_input("Name?");
        buffer = fl_input("Model Number?");
        model_number = atoi(buffer.c_str());
        type = fl_input("Type?");
        buffer = fl_input("Cost?");
        cost = atof(buffer.c_str());
        description = fl_input("Description");

        Robot_part robot_part(name,model_number,cost,description,type);
        robot_parts.push_back(robot_part);
}

void Shop :: create_new_robot_model()
{
	for (int i = 0; i < robot_parts.size(); i++)
	{
		fl_message("hello");
	}
}

void Shop :: create_new_customer()
{

}

void Shop :: create_new_sales_associate()
{

}

void Shop :: create_new_order()
{

}

void Shop :: save(string filename)
{

}

void Shop :: open(string filename)
{

}
