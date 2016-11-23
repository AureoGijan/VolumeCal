#include <iostream>
#include <iomanip>
#include "expo.h"
using namespace std;

expo::expo() {
    for (int i = 0; i < 10; i++) {
        timber[i].finalVol = 0;
        timber[i].frequency = 0;
        timber[i].initialVol = 1 + 1 * (i + 1);
        timber[i].interval = 24 + 2 * (i + 1);
        
    }
    totalPrice = 0;
    totalVol = 0;
    unitPrice = 0;
    
    cout << "expo constructor invoked" << endl;
}

expo::~expo() {
    cout << "pulpwood destructor invoked" << endl;
}

void expo::setPrice(double price) {
    unitPrice = price;
}

void expo::setFrequency() {
    for (int i = 0; i < 10; i++) {
        cout << timber[i].interval << ": ";
        cin >> timber[i].frequency;
        cout << endl;
    }
}

double expo::calculateVol() {
    for (int i = 0; i < 10; i++) {
        timber[i].finalVol = timber[i].frequency * timber[i].initialVol;
        totalVol += timber[i].finalVol;
    }
    
    return totalVol;
}

double expo::calculatePrice() {
    return totalPrice = totalVol * unitPrice;
}

void expo::printTable() const {
    cout << fixed << setprecision(2);
    cout << "************* Data Sheet **************" << endl;
    cout << "Export" << endl;
    cout << "Interval         Frequency           volume" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << timber[i].interval << "            " << timber[i].frequency <<
        " x " << timber[i].initialVol << "                " 
        << timber[i].finalVol << endl;
    }
    
    cout << "Total Volume: " << totalVol << endl;
    cout << "Total Price: " << totalPrice << endl;
}