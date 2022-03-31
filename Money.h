#ifndef Money_H
#define Money_H

#include <iostream>

using namespace std;

class Money{

    int dollars;
    int cents;

public:
    Money operator + (const Money& m) {
        Money money;
        money.cents = this->cents + m.cents;
        money.dollars = this->dollars + m.dollars;
        return money;
    }
    Money operator - (const Money& m) {
        Money money;
        money.cents = this->cents - m.cents;
        money.dollars = this->dollars - m.dollars;
        return money;
    }
    //less than
    bool operator <(const Money& m) {
         if(dollars < m.dollars) {
            return true;
         }
         if(dollars == m.dollars && cents < m.cents) {
            return true;
         }
         
         return false;
      }
      //greater than
      bool operator >(const Money& m) {
         if(dollars > m.dollars) {
            return true;
         }
         else if(dollars == m.dollars && cents > m.cents) {
            return true;
         }else{
            return false;
         }
      }
      //equal to
      bool operator ==(const Money& m) {
         if(dollars == m.dollars && cents == m.cents) {
            return true;
         }else{
             return false;
         }
      }
      //not equal to
      bool operator !=(const Money& m) {
         if(dollars != m.dollars || cents != m.cents) {
            return true;
         }else{
             return false;
         }
      }
      //less than or equal to
      bool operator <=(const Money& m) {
         if(dollars == m.dollars && cents == m.cents) {
            return true;
         }else if(dollars < m.dollars) {
            return true;
         }
         if(dollars == m.dollars && cents < m.cents) {
            return true;
         }{
             return false;
         }
      }
      //greater than or equal to
      bool operator >=(const Money& m) {
         if(dollars == m.dollars && cents == m.cents) {
            return true;
         }else if(dollars > m.dollars) {
            return true;
         }
         if(dollars == m.dollars && cents > m.cents) {
            return true;
         }{
             return false;
         }
      }
    Money(int dollars, int cents){dollars = dollars; cents = cents;}
    Money(){}

};

#endif //Money_H