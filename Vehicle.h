#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

#include<iostream>

using namespace std;

class Vehicle
{
    private:
        string vehicleType;
        string model;
        string color;
        int mileAge;
        long double price;

    public:

        Vehicle(string type,string mod,string col,int mileage,double amount)
        {
            vehicleType=type;
            model=mod;
            color=col;
            mileAge=mileage;
            price=amount;
        }

        string getVehicleType()
        {
            return vehicleType;
        }

        string getModel()
        {
            return model;
        }

        string getColor()
        {
            return color;
        }

        int getMileAge()
        {
            return mileAge;
        }

        double getPrice()
        {
            return price;
        }

        friend void operator<<(ostream &out,Vehicle &c)
        {
                out<<"\n\nVehicle Type : "<<c.getVehicleType()<<"\n";
                out<<"Model : "<<c.getModel()<<"\n";
                out<<"Color : "<<c.getColor()<<"\n";
                out<<"MileAge : "<<c.getMileAge()<<"\n";
                out<<"Price : "<<c.getPrice()<<"\n\n\n";
               /* out<<"No of Persons : "<<c.getNoOfPersons()<<"\n";
                out<<"Car Type : "<<c.getCarType()<<"\n\n\n";*/
        }

        bool operator>(Vehicle &c2)
        {
            if(this->getPrice()>c2.getPrice())
            {
                return true;
            }
            return false;
        }

        bool operator<(Vehicle &c2)
        {
            if(this->getPrice()<c2.getPrice())
            {
                return true;
            }
            return false;
        }

        virtual int getNoOfWheels()=0;


};
#endif // VEHICLE_H_INCLUDED
