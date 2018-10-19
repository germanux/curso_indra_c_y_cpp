#ifndef VEHELECTRICO_H
#define VEHELECTRICO_H

#include "Vehiculo.h"

using namespace curso;

class VehElectrico : public Vehiculo
{
    private:
        float kwh;
    public:
        VehElectrico(int ruedas);
        virtual ~VehElectrico();
        bool Repostar(float kwh);
        virtual bool CambiarBateria(int amperios) = 0;
};

#endif // VEHELECTRICO_H
