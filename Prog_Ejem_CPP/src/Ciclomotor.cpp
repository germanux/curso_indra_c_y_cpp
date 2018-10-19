#include "Ciclomotor.h"

Ciclomotor::Ciclomotor(int ruedas) : Vehiculo(ruedas)
{
    this->gasolina = 0;
}

bool Ciclomotor::Repostar(float gasolina) {
    this->gasolina += gasolina;
    cout << "Repostando ciclo " << gasolina
         << ", deposito:" << this->gasolina << endl;
    return true;
}
Ciclomotor::~Ciclomotor()
{
    //dtor
}
