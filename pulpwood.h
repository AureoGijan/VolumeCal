#ifndef PULPWOOD_H
#define PULPWOOD_H
#include "cylinder.h"

class pulpwood: public cylinder {
public:
    void setPrice(double);
    void setFrequency();
    double calculateVol();
    double calculatePrice();
    void printTable() const; //cannot be used with GUI later
    pulpwood();
    ~pulpwood();
private:
    volume timber[10];
    double totalVol;
    double totalPrice;
};


#endif /* PULPWOOD_H */

