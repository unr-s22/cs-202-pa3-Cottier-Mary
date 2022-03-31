#ifndef Animal_H
#define Animal_H

#include <iostream>
#include "Money.h"

using namespace std;

class Account{

    int dollars;
    int cents;


public:

    Account(int dollars, int cents){
        cout << "Account Details" << endl;
        cout << "--------------------------" << endl;
        cout << "Current Balance:$" << dollars << "." << cents << endl;
        cout << "--------------------------" << endl;
        //makeDeposit;
        //makeWithdrawls;

    }

    void makeDeposit(){
        cout << "--------------------" << endl;
        cout << "Number of Deposits: "/*depositNum*/ << endl;
        cout << "--------------------" << endl;

        for(int i = 0; i < //depositNum; i++ ){
            cout << "(" << i << ") " << "$" << /*Here would be the depsoit.*/ << endl;
        }
        cout << "--------------------" endl;

    }

    void makeWithdrawls(){
        cout << "Number of Withdrawals: " << /*withdrawlNum*/ << endl;
        cout << "--------------------------" << endl;

        for(int i = 0; i < /*withdrawlNum; i++ */){
                       cout << "(" << i << ") " << "$" << /*Here would be the withdral*/ << endl;
    }

};

#endif //Animal_H