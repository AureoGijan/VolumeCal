#include <iostream>
#include "pulpwood.h"
#include "expo.h"

int main() {
    
    pulpwood data;
    expo info;
    
    
    data.setPrice(20.00);
    data.setFrequency();
    data.calculateVol();
    data.calculatePrice();
    data.printTable();
    
    info.setPrice(30.00);
    info.setFrequency();
    info.calculateVol();
    info.calculatePrice();
    info.printTable();
    
    
    return 0;
}