#include <string>
#include <iostream.h>

using std::string;
//using std::cin;
using std::cout;

class Car
{
    private:
        string colour;
    public:
        car(string colour_in);
        string getColour();
};
car::car(string colour_in){
    colour = colour_in;
}
string car::getColour()
{
    return colour;
}


int main()
{
	car* garage = NULL;
	int menu_choice = 0;
    string temp_colour;
    while(menu_choice !=3)
    {
		cout <<"Enter 1 to put the car in garage, 2 to remove it, 3 to quit: ";
		cin >>menu_choice;

		if (menu_choice == 1 && garage == NULL)
		{
			cout <<"Enter colour of car: ";
			cin >>temp_colour;
			
			garage = new car(temp_colour);
			cout <<"Colour is " <<
				garage->getColour()<<endl;
		}
		else if (menu_choice == 2 && garage != NULL){
            delete garage;
            garage = NULL;
            cout <<"Car removed." << endl;
        }
    }
    if (garage != NULL)
    {
        delete garage;
    }
}


