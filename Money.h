#ifndef Money_H
#define Money_H

#include <iostream>

using namespace std;

class Money{

    int dollars;
    int cents;


public:
    
    Money(){}
    Money(int dollars, int cents){dollars = dollars; cents = cents;}

};

#endif //Money_H