#ifndef BROKER_H_INCLUDED
#define BROKER_H_INCLUDED

#include<iostream>
#include "HDFC.h"
#include "SBI.h"
#include "ICICI.h"
#include "IndianBank.h"

class Broker
{
    public:
             double comparisionInterest(Loan &obj1,Loan &obj2)
             {
                if(obj1.getInterestRate()<obj2.getInterestRate())
                {
                    return obj1.getInterestRate();
                }
                return obj2.getInterestRate();
             }

             double comparisionInterest(Loan &obj1,Loan &obj2,Loan &obj3)
             {
                if(obj1.getInterestRate()<obj2.getInterestRate())
                {
                    if(obj1.getInterestRate()<obj3.getInterestRate())
                    {
                        return obj1.getInterestRate();
                    }
                    else
                    {
                        return obj3.getInterestRate();
                    }
                }
                else if(obj2.getInterestRate()<obj3.getInterestRate())
                {
                    return obj2.getInterestRate();
                }
                else
                {
                    return obj3.getInterestRate();
                }
             }

             double comparisionInterest(Loan obj[])
             {
                int length,i;
                length=sizeof(obj)/sizeof(obj[0]);
                double minimum=obj[0].getInterestRate();
                for(i=1;i<length;i++)
                {
                    if(minimum>obj[i].getInterestRate())
                    {
                        minimum=obj[i].getInterestRate();
                    }
                }
                return minimum;
             }

             string getBankInfo(Bank &obj)
             {
                return "Bank Name : "+obj.getBankName()+"\n"+
                        "Established Date : "+obj.getEstablishedDate()+"\n"+
                        "bankType : "+obj.getBankType()+"\n"+
                        "branchName : "+obj.getBranchName();
             }
};
#endif
