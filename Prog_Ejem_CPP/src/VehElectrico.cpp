#include "VehElectrico.h"

VehElectrico::VehElectrico(int ruedas) : Vehiculo(ruedas)
{
    //ctor
}

bool VehElectrico::Repostar(float kwh) {
    this->kwh += kwh;
    cout << "Repostando kwh " << kwh
         << ", bateria:" << this->kwh << endl;
    return true;
}

VehElectrico::~VehElectrico()
{
    //dtor
}
