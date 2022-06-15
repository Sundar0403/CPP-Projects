#ifndef LOAN_H_INCLUDED
#define LOAN_H_INCLUDED

#include<iostream>
using namespace std;

class Loan
{

    public:

        virtual string getBankName()
        {
            return "";
        }

        virtual string* getAvailableLoans()
        {
            return NULL;
        }

        virtual double getInterestRate()
        {
            return 0;
        }

        virtual string* getDocumentRequired()
        {
            return NULL;
        }
};
#endif
