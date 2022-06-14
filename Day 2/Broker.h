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

         /*    int comparisionInterest(Loan &obj1,Loan &obj2,Loan &obj3)
             {
                if(obj1.getInterestRate()<obj2.getInterestRate())
                {
                    if(obj1.getInterestRate()<obj3.getInterestRate())
                    {
                        return 1;
                    }
                    else
                    {
                        return 2;
                    }
                }
                else if(obj2.getInterestRate()<obj3.getInterestRate())
                {
                    return 2;
                }
                else
                {
                    return 3;
                }
             }*/

             string getBankInfo(Bank &obj)
             {
                return "Bank Name : "+obj.getBankName()+"\n"+
                        "Established Date : "+obj.getEstablishedDate()+"\n"+
                        "bankType : "+obj.getBankType()+"\n"+
                        "branchName : "+obj.getBranchName();
             }
};
#endif
