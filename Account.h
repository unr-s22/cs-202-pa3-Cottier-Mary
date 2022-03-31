#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <vector>
#include "Money.h"

class Account{

    int dollars;
    int cents;


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

        //makeDeposit;
        //makeWithdrawls;

    }

    void makeDeposit(){
        std::cout << "--------------------" << std::endl;
        std::cout << "Number of Deposits: "/*depositNum*/ << std::endl;
        std::cout << "--------------------" << std::endl;
        cout << "--------------------" << endl;
        cout << "Number of Deposits: "/*depositNum*/ << endl;
        cout << "--------------------" << endl;

        for(int i = 0; i < //depositNum; i++ ){
                       std::cout << "(" << i << ") " << "$" << /*Here would be the depsoit.*/ << std::endl;
    }
    std::cout << "--------------------" endl;

    for(int i = 0; i < /*depositNum*/; i++ ){
        std::cout << "(" << i << ") " << "$" << /*Here would be the depsoit.*/ << std::endl;
    }
    std::cout << "--------------------" std::endl;

    }

    void makeWithdrawls(){
        std::cout << "Number of Withdrawals: " << /*withdrawlNum*/ << std::endl;
        std::cout << "--------------------------" << std::endl;

        for(int i = 0; i < /*withdrawlNum; i++ */){
            std::cout << "(" << i << ") " << "$" << /*Here would be the withdral*/ << std::endl;
    }

};

#endif //Animal_H