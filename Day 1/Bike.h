#ifndef BIKE_H_INCLUDED
#define BIKE_H_INCLUDED

#include<iostream>
#include "Vehicle.h"

class Bike : public Vehicle
{
    private:
        int weight;
        string bikeType;
        int noOfWheels=2;

    public:

            Bike(string vehicleType,string model,string color,int mileAge,double price,int wt,string type) : Vehicle(vehicleType,model,color,mileAge,price)
            {
                weight=wt;
                bikeType=type;
            }

            int getWeight()
            {
                return weight;
            }

            string getBikeType()
            {
                return bikeType;
            }

            int getNoOfWheels()
            {
                return noOfWheels;
            }
};
#endif
