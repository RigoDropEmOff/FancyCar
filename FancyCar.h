#ifndef FANCY_CAR_H
#define FANCY_CAR_H

#include <iostream>
#include <string>
using namespace std;

const int FULL_TANK = 14;
//const bool engine = false;

class FancyCar{
    public:
    FancyCar();
    
    FancyCar(string inputModel, double UserMPG);
    
    void GetModel(string inputModel);
    string ReturnModel() const;
    void GetMPG(double UserMPG);
    int CheckOdometer() const;
    double CheckGasGauge() const;
    void HonkHorn();
    void Drive(double distance);
    void AddGas(double gas);
    void StartEngine();
    void StopEngine();
    void Print() const;

    private:
    int milesDriven;
    double gasInTank;
    double mileage;
    double drivingCapacity;
    string model;
    bool engine;
    string engineStatus;
};

#endif