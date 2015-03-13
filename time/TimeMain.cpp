#include "Time.h"

#include <iostream>

using namespace std;

int main() 
{
	Time t(6,6,6); //allocated memory for the object t
	t.setTime(3,5,6);
	t.print();
	cin.get();

	Time *t1; //allocated memory for a pointer which will contain an address
	t1 = new Time(6,6,6); //allocated memory for a Time object called t1
	//(*t1).setTime(7,7,7); //dereferenced t1
	t1 -> print(); //dereferenced t1
	delete t1; //destroy link between t1 and its object
	t1 = NULL;
	cin.get();
}
