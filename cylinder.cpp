#include <iostream>
#include "cylinder.h"
using namespace std;

cylinder::cylinder() {
    unitPrice = 0;
    cout << "cylinder constructor invoked" << endl;
}

cylinder::~cylinder() {
    cout << "cylinder destructor invoked" << endl;
}

