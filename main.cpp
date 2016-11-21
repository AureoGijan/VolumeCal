#include <iostream>
#include "pulpwood.h"

int main() {
    
    pulpwood data;
    
    data.setPrice(20.00);
    data.setFrequency();
    data.calculateVol();
    data.calculatePrice();
    data.printTable();
    
    return 0;
}