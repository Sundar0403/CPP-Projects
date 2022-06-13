#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED


#include<iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
    private:
        int noOfPersons;
        string carType;
        int noOfWheels=4;

    public:

            Car(string vehicleType,string model,string color,int mileAge,double price,int persons,string carType) : Vehicle(vehicleType,model,color,mileAge,price)
            {
                noOfPersons=persons;
                this->carType=carType;
            }

            int getNoOfPersons()
            {
                return noOfPersons;
            }

            string getCarType()
            {
                return carType;
            }

            int getNoOfWheels()
            {
                return noOfWheels;
            }

};
#endif
