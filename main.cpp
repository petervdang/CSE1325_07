#include "Shop.cpp"

using namespace std;

Fl_Window *win;
Fl_Menu_Bar *menubar;
Shop shop;

class View : public Fl_Box
{
        public: View(int x, int y, int w, int h) : Fl_Box(x,y,w,h) {}
};

View *view;

void CloseCB(Fl_Widget *w, void *p)
{
        win -> hide();
}


void ComponentCB(Fl_Widget *w, void *p)
{
	shop.create_new_robot_part();
}

Fl_Menu_Item menuitems[] = {

        {"&File", 0, 0,0, FL_SUBMENU},
                { "&Quit", FL_ALT + 'q', (Fl_Callback *)CloseCB},
                { 0 },

	{"&Create", 0,0,0, FL_SUBMENU},
		{ "&Robot Component", FL_ALT + 'c', (Fl_Callback *) ComponentCB},
		{ 0 },
	{ 0 }
};

int main()
{
	const int x = 640;
	const int y = 480;

	win = new Fl_Window{x,y, "Pete's Robot Shop"};
	
	menubar = new Fl_Menu_Bar(0,0,x,30);
	menubar -> menu(menuitems);
	view = new View{0,0,x,y};

	win -> callback(CloseCB, view);
	win -> resizable(*view);
	win -> end();
	win -> show();

	return(Fl::run());
}
