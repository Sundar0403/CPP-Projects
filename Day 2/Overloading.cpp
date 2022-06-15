#include<iostream>
#include "Bank.h"
#include "Broker.h"
#include "Loan.h"
#include "HDFC.h"
#include "SBI.h"
#include "ICICI.h"
#include "IndianBank.h"

string getName()
{
    string name="";
    cout<<"Enter the Name :";
    cin>>name;
    return name;
}

string getDate()
{
    string date="";
    cout<<"Enter the Date :";
    cin>>date;
    return date;
}

string getType()
{
    string type="";
    cout<<"Enter the Type :";
    cin>>type;
    return type;
}

string getBranch()
{
    string branch="";
    cout<<"Enter the Branch Name :";
    cin>>branch;
    return branch;
}

double getInterest()
{
    double interest=0;
    cout<<"Enter the Interest Rate :";
    cin>>interest;
    return interest;
}

string* loanAvailable()
{
    string newsStr[3];
    int i;
    cout<<"Enter the Type of Loan Available :";
    for(i=0;i<3;i++)
    {
        cin>>newsStr[i];
    }
    return newsStr;
}

string* docRequired()
{
    string newStr[3];
    int i;
    cout<<"Enter the Type of Document Needed :";
    for(i=0;i<3;i++)
    {
        cin>>newStr[i];
    }
    return newStr;
}

string getBankName(double rate,HDFC &h,SBI &s,ICICI &i,IndianBank &ib)
{
    if(rate==h.getInterestRate())
    {
        return h.getBankName();
    }
    else if(rate==s.getInterestRate())
    {
        return s.getBankName();
    }
    else if(rate==i.getInterestRate())
    {
        return i.getBankName();
    }
    else
    {
        return ib.getBankName();
    }
}

int main()
{
    string arr[3]={"Gold Loan","Personal Loan","Land Loan"};
    string doc[3]={"Gold Loan Document","Property Document","Land document"};
    cout<<"\n";
    HDFC h(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    cout<<"\n";
    SBI s(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    cout<<"\n";
    ICICI i(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    cout<<"\n";
    IndianBank ib(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());

    Broker b;

    double rate=b.comparisionInterest(h,s);

    string name=getBankName(rate,h,s,i,ib);
    cout<<"\n\nThe Bank with smallest Interest Rate is : "<<name;

    rate=b.comparisionInterest(h,s,i);
    name=getBankName(rate,h,s,i,ib);

    cout<<"\n\n The Bank With Lowest Interest Rate is : "<<name;

    Loan ar[]={h,s,i,ib};

    rate=b.comparisionInterest(ar);
    cout<<rate;
    name=getBankName(rate,h,s,i,ib);	

    cout<<"\n\n The Bank With Lowest Interest Rate is : "<<name;

    return 0;
}

