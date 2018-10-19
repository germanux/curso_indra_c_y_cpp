#ifndef COCHE_H
#define COCHE_H

#include <iostream>
#include "Vehiculo.h"
using namespace std;

namespace curso {

class Coche : public Vehiculo
{
    private:
        int puertas;
        float gasolina;

    public:
        Coche(int puertas);

        int GetPuertas() { return puertas; }
        void SetPuertas(int pu) { puertas = pu; }
        bool Acelerar(float fuerza);
        bool Repostar(float gasolina);
        void Mostrar() {
            cout << "Coche con " << puertas << " puertas " << endl;
            cout << " - deposito " << gasolina << " l " << endl;
            cout << " - velocidad " << velocidad << " km/h " << endl;
        }
        virtual ~Coche();
};
}
#endif // COCHE_H
