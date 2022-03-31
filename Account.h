#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account{

public:

    Account(int dollars, int cents){

        std::cout << "Account Details" << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Current Balance:$" << dollars << "." << cents << std::endl;
        std::cout << "--------------------------" << std::endl;

        std::cout << "Account Details" << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Current Balance:$" << dollars << "." << cents << std::endl;
        std::cout << "--------------------------" << std::endl;

        makeDeposit();
        makeWithdrawls();

    }

    void makeDeposit(){
        int numDeposits;
        float depositAmount;

        std::cout << "--------------------" << std::endl;
        std::cout << "Number of Deposits: " << numDeposits << std::endl;
        std::cout << "--------------------" << std::endl;
        cout << "--------------------" << endl;
        cout << "Number of Deposits: " << numDeposits << endl;
        cout << "--------------------" << endl;

        for(int i = 0; i < numDeposits; i++ ){
            std::cout << "(" << i << ") " << "$" << depositAmount << std::endl;
        }
        std::cout << "--------------------" << std::endl;

    }

    void makeWithdrawls() {
        int numWithdrawl;
        float withdwalAmount;

        std::cout << "Number of Withdrawals: " << numWithdrawl << std::endl;
        std::cout << "--------------------------" << std::endl;

        for (int i = 0; i < numWithdrawl; i++) {
            std::cout << "(" << i << ") " << "$" << withdwalAmount << std::endl;
        }
    }


};

#endif //Animal_H