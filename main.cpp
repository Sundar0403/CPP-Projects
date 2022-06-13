#include<iostream>

using namespace std;

#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

/*void getCarDetails(Car &c)
{
    cout<<"Enter the Vehicle Type :";
    string vehicleType="";
    cin>>vehicleType;

    cout<<"Enter the Color :";
    string color="";
    cin>>color;
    cout<<"Enter the MileAge :";
    int mileAge=0;
    cin>>mileAge;
    cout<<"Enter the Price of the Vehicle :";
    double amount=0.0;
    cin>>amount;
    cout<<"Enter the No of Persons :";
    int persons=0;
    cin>>persons;
    cout<<"Enter the Type of Car :";
    string type="";
    cin>>type;
    c(vehicleType,model,color,mileAge,amount,persons,type);
}*/
string getVehicleType()
{
   cout<<"Enter the Vehicle Type :";
    string vehicleType="";
    cin>>vehicleType;
    return vehicleType;
}

string getModel()
{
    cout<<"Enter the Model :";
    string model="";
    cin>>model;
    return model;
}

string getColor()
{
    cout<<"Enter the Color :";
    string color="";
    cin>>color;
    return color;
}

int getMileAge()
{
    cout<<"Enter the MileAge :";
    int mileAge=0;
    cin>>mileAge;
    return mileAge;
}

double getPrice()
{
    cout<<"Enter the Price of the Vehicle :";
    double amount=0.0;
    cin>>amount;
    return amount;
}

int getPersons()
{
    cout<<"Enter the No of Persons :";
    int persons=0;
    cin>>persons;
    return persons;
}

int getWeight()
{
    cout<<"Enter the Bike Weight :";
    int weight=0;
    cin>>weight;
    return weight;
}

string getCarType()
{
    cout<<"Enter the Type of Car :";
    string type="";
    cin>>type;
    return type;
}

string getBikeType()
{
    cout<<"Enter the Type of Bike :";
    string type="";
    cin>>type;
    return type;
}

int main()
{
    Car c(getVehicleType(),getModel(),getColor(),getMileAge(),getPrice(),getPersons(),getCarType());
    //getCarDetails(c);
    Car c1(getVehicleType(),getModel(),getColor(),getMileAge(),getPrice(),getPersons(),getCarType());
    Bike b(getVehicleType(),getModel(),getColor(),getMileAge(),getPrice(),getWeight(),getBikeType());
    cout<<"The Car Details Are : \n";
    cout<<c;
    cout<<c1;

    cout<<"The Bike Details Are : \n";
    cout<<b;

    if(c>c1)
    {
        cout<<"The Vehicle 1 is Greater than Vehicle 2 :\n";
    }
    else
    {
        cout<<"The Vehicle 2 is Greater than Vehicle 1 :\n";
    }

    if(c<b)
    {
        cout<<"The Vehicle 1 is Lesser than Vehicle 2 :\n";
    }

    else
    {
        cout<<"The Vehicle 2 is Lesser than Vehicle 1:\n";
    }

    cout<<"No Of Wheels in Vehicle 1 :"<<c.getNoOfWheels()<<"\n";
    cout<<"No Of Wheels in Vehicle 2 :"<<c1.getNoOfWheels()<<"\n";
    cout<<"No Of Wheels in Vehicle 3 :"<<b.getNoOfWheels()<<"\n";
    return 0;
}
