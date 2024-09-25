#include "FancyCar.h"
#include <iostream>
#include <iomanip>
#include <cmath>

FancyCar::FancyCar() {
    milesDriven = 5;
    gasInTank = FULL_TANK;//FULL_TANK;
    mileage = 24.0;
    model = "Old Clunker";
    engine = false;
}
FancyCar::FancyCar(string inputModel, double UserMpg) {
/* Type your code here */
model = inputModel;
mileage = UserMpg;
milesDriven = 5;
gasInTank = FULL_TANK;
engine = false;
}
void FancyCar::Print() const{
    cout <<"Model: "<< model << endl;
    cout <<"MPG: "<<mileage<<endl;
    cout <<"Miles: "<<milesDriven<<endl;
    cout <<"Gas: "<<gasInTank<<endl;
    if (engine == false){
    cout <<"Engine Status: Off" << endl;
    }else{
    cout <<"Engine Status: On" << endl;
}
}
// Return car model
void FancyCar::GetModel(string inputModel){
    model = inputModel;
}
string FancyCar::ReturnModel() const{
    return model;
}
void FancyCar::GetMPG(double UserMpg){
    mileage = UserMpg;
}

int FancyCar::CheckOdometer() const {
    cout <<"Odometer: "<<milesDriven<<endl;
    return milesDriven;
}
// Return amount of gas in tank
double FancyCar::CheckGasGauge() const{
    cout <<"Gas Gauge: "<< gasInTank<<endl;
    return gasInTank;
}
void FancyCar::HonkHorn(){
    cout<<"The "<<model<<" says beep beep!";
}
void FancyCar::Drive(double distance){
    //engine = false;
    double initialGasInTank = gasInTank;
    int initialMilesDriven = milesDriven;
   if(engine && distance > 0 && gasInTank > 0){
        milesDriven += distance;
        gasInTank -= (distance/mileage);
        if(gasInTank <= 0){
            cout << "Out of Gas!"<<endl;
            double distanceTraveled = mileage * (initialGasInTank);
            milesDriven = initialMilesDriven + distanceTraveled;
            gasInTank = 0.0;
        }
    } else if (!engine) {
        cout << "Engine is not started. Please start the engine first." << endl;
        milesDriven = initialMilesDriven;
        gasInTank = initialGasInTank;
    }
}

    //gasInTank = 0.0;
//}
void FancyCar::AddGas(double gas) {
    if (!engine) {  
        if (gas > 0) {  
            gasInTank += gas;
            
            if (gasInTank > FULL_TANK) {
                gasInTank = FULL_TANK;
                cout << "Full Tank" << endl;
            }
        } else {
            cout << "Invalid amount of gas. Please enter a positive value." << endl;
        }
    } else {
        cout << "Turn the car off first!" << endl;
    }
}
void FancyCar::StartEngine(){
    engine = true;
    if(engine = true){
        engineStatus = "On";
    }
    else{
        engineStatus = "Off";
    }
}
void FancyCar::StopEngine(){
    engine = false;
    if(engine = false){
        engineStatus = "Off";
    }
    else{
        engineStatus = "On";
    }
}