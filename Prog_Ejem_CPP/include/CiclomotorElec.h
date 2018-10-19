#ifndef CICLOMOTORELEC_H
#define CICLOMOTORELEC_H

#include "VehElectrico.h"

using namespace curso;

class CiclomotorElec : public VehElectrico
{
    public:
        CiclomotorElec(int ruedas);
        virtual ~CiclomotorElec();
        float Getmanillas() { return manillas; }
        void Setmanillas(float val) { manillas = val; }

        //bool Repostar(float gasolina);
        bool CambiarBateria(int amperios);

    protected:

    private:
        float manillas; //!< Member variable "manillas"

};

#endif // CICLOMOTORELEC_H
