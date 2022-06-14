#ifndef SBI_H_INCLUDED
#define SBI_H_INCLUDED

#include<iostream>
#include "Bank.h"
#include "Loan.h"

using namespace std;

class SBI : public Bank,public Loan
{
    private:
        string bankName;
        string establishedDate;
        string bankType;
        string branchName;
        string* availableLoans;
        double interestRate;
        string* documentRequired;

    public:

            SBI(string bankName,string establishedDate,string bankType,string branchName,string* availableLoans,double interestRate,string* documentRequired)
            {
                this->bankName=bankName;
                this->establishedDate=establishedDate;
                this->bankType=bankType;
                this->branchName=branchName;
                this->availableLoans=availableLoans;
                this->interestRate=interestRate;
                this->documentRequired=documentRequired;
            }

            string getBankName()
            {
                return bankName;
            }

            string getEstablishedDate()
            {
                return establishedDate;
            }

            string getBankType()
            {
                return bankType;
            }

            string getBranchName()
            {
                return branchName;
            }

            string getInfo()
            {
                return "Bank Name : "+bankName+"\n"+
                        "Established Date : "+establishedDate+"\n"+
                        "bankType : "+bankType+"\n"+
                        "branchName : "+branchName;
            }

            string* getAvailableLoans()
            {
                return availableLoans;
            }

            double getInterestRate()
            {
                return interestRate;
            }

            string* getDocumentRequired()
            {
                return documentRequired;
            }

};
#endif // SBI_H_INCLUDED
