#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED

#include<iostream>
using namespace std;

class Bank
{
    private:
            string bankName;


    public:
            virtual string getBankName()
            {
                return "";
            }

            virtual string getEstablishedDate()
            {
                return "";
            }

            virtual string getBankType()
            {
                return "";
            }

            virtual string getBranchName()
            {
                return "";
            }

            virtual string getInfo()
            {
                return "";
            }
};
#endif // BANK_H_INCLUDED
