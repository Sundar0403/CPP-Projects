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
    HDFC h(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    SBI s(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    ICICI i(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());
    IndianBank ib(getName(),getDate(),getType(),getBranch(),loanAvailable(),getInterest(),docRequired());

    Broker b;

    double rate=b.comparisionInterest(h,s);

    string name=getBankName(rate,h,s,i,ib);
    cout<<"\n\nThe Bank with smallest Interest Rate is : "<<name;

   /* if(b.comparsionInterest(h,s))
    {
        cout<<"\n\nThe Bank with smallest Interest Rate is : "<<h.getBankName();
    }
    else
    {
        cout<<"The Bank with smallest Interest Rate is : "<<s.getBankName();
    }*/

    /* int value=b.comparisionInterest(h,s,i);
     if(value==1)
     {
        cout<<"\n\nThe Bank with smallest Interest Rate is : "<<h.getBankName();
     }
     else if(value==2)
     {
        cout<<"The Bank with smallest Interest Rate is : "<<s.getBankName();
     }
     else if(value==3)
     {
        cout<<"The Bank with smallest Interest Rate is : "<<i.getBankName();
     }*/
    //cout<<obj.getBankName();
    //cout<<name;
    //cout<<h.getInfo();
   // cout<<h.getBankName();

    return 0;
}

