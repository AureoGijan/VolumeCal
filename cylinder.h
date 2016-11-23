#ifndef CYLINDER_H
#define CYLINDER_H

class cylinder {
public:
    virtual void setPrice(double) = 0;
    virtual void setFrequency() = 0;
    virtual double calculateVol() = 0;
    virtual double calculatePrice() = 0;
    virtual void printTable() const = 0;; //cannot be used with GUI later
    cylinder();
    virtual ~cylinder();
protected:
    struct volume {
        int interval;
        double initialVol;
        int frequency;
        double finalVol;
    };
    double unitPrice;
    double totalVol;
    double totalPrice; 
    
    
};


#endif /* CYLINDER_H */

