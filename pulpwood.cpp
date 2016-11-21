#include <iostream>
#include <iomanip>
#include "pulpwood.h"
using namespace std;

pulpwood::pulpwood() {
    for (int i = 0; i < 10; i++) {
        timber[i].frequency = 0;
        timber[i].interval = 10 + 2 * (i+1);
        timber[i].initialVol += 2 * (i + 1);
        timber[i].finalVol = 0;
        
    }
    
    unitPrice = 0;
    totalVol = 0;
    
    cout << "pulpwood constructor invoked" << endl;
}

pulpwood::~pulpwood() {
    cout << "pulpwood destructor invoked" << endl;
}

void pulpwood::setPrice(double price) {
    unitPrice = price;
}

void pulpwood::setFrequency() {
    for (int i = 0; i < 10; i++) {
        cout << timber[i].interval << ": ";
        cin >> timber[i].frequency;
        cout << endl;
    }
}

double pulpwood::calculateVol() {
    for (int i = 0; i < 10; i++) {
        timber[i].finalVol = timber[i].frequency * timber[i].initialVol;
        totalVol += timber[i].finalVol;
    }
    
    return totalVol;
}

double pulpwood::calculatePrice() {
    totalPrice = totalVol * unitPrice;
    return totalPrice;   
}

void pulpwood::printTable() const {
    cout << fixed << setprecision(2);
    cout << "************* Data Sheet **************" << endl;
    cout << "Pulpwood" << endl;
    cout << "Interval         Frequency           volume" << endl;
    for (int i = 0; i < 10; i++) {
        cout << timber[i].interval << "            " << timber[i].frequency <<
        " x " << timber[i].initialVol << "                " 
        << timber[i].finalVol << endl;  
    }
    
    cout << "Total Volume: " << totalVol << endl;
    cout << "Total Price: " << totalPrice << endl;
}


