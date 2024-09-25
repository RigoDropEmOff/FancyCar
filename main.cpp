#include <iostream>
#include <string>
#include <iomanip>
#include "FancyCar.h"

int main()
{
    string InputModel;
    int milesDriven;
    double UserMPG;
    double gasInTank;
    double drivingCapacity;
    double distance;
    double gas;
    
    FancyCar car;
    car.StartEngine();
    car.Drive(50);
    car.CheckOdometer(); 
     car.CheckGasGauge() ;
    
    

    return 0;
}