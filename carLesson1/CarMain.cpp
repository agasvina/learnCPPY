#include <string>
#include <iostream>
#include <vector>

using std::string;
using namespace std;

class Car {
    private: 
        string color;
    public:
        Car(string c_in);
        ~Car();
        string getColor();
       
};
Car::Car(string c_in) {
    this ->color = c_in;
}
Car::~Car() {
    cout << "Car is missing" <<endl;
}
string Car::getColor(){
    return this->color;
}

class Garage {
    public:
        vector<Car*> myVector;
        Garage();
};
Garage::Garage() {
//do nothing
}

//this 


int main() 
{
    Car * dude = new Car("red");
    cout << dude -> getColor() << endl;
    Garage * park = new Garage();
    park ->myVector.push_back(dude);
    cout << park -> myVector[0] -> getColor() << endl;
    //delete dude;
     Car * temp = park -> myVector[0];
     delete temp;
     cout << park ->myVector.size() << endl;
     //the object is missing but the vector still available.. 
     //WEW
     cout << park ->myVector[0] ->getColor(); 
     cout << park ->myVector.pop_back();
     //park -> myVector.pop_back();
     
     //temp -> getColor();
    return 0;
}
    
    

