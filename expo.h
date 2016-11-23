#ifndef EXPO_H
#define EXPO_H
#include "cylinder.h"

class expo: public cylinder {
public:
    void setPrice(double);
    void setFrequency();
    double calculateVol();
    double calculatePrice();
    void printTable() const; //cannot be used with GUI later
    expo();
    ~expo();
private:
    volume timber[10];
}; 

#endif /* EXPO_H */