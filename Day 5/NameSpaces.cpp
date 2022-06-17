#include<iostream>
#include "InsideNS.h"
#include "InlineCalling.h"

//using namespace newSpace;
using namespace std;

int getInteger()
{
    cout<<"Enter the Number :";
    int a=0;
    cin>>a;
    return a;
}

int main()
{
    newSpace::InsideNS i(getInteger(),getInteger());
    InlineCalling ic(getInteger(),getInteger());
    cout<<"\n\nSum = "<<i.squareSum();

    cout<<"\n\nAbsolute Value = "<<ic.getAbsolute();

    cout<<"\n\nPower Value = "<<ic.getPowerof();

    cout<<"\n\nSquare Root = "<<ic.getSqrt();

    cout<<"\n\nMinimum Value = "<<ic.getMin();

    cout<<"\n\nMaximum Value = "<<ic.getMax();

    cout<<"\n\n"<<ic.getValue();

    cout<<"\n\n"<<ic.result();

    return 0;
}
