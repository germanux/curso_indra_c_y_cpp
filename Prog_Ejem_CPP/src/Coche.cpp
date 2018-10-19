#include "../include/Coche.h"

curso::Coche::Coche(int puertas) : curso::Vehiculo(4)
{
    this->puertas = puertas;
    this->encendido = false;
    this->velocidad = 0;
    this->gasolina = 0;
    cout << "Coche fabricado con "
         << puertas << " puertas" << endl;
}
bool curso::Coche::Acelerar(float fuerza) {

    Vehiculo::Acelerar(fuerza);

    if ( this->encendido) {
        this->gasolina -= this->velocidad / 100;
        cout << ", deposito:" << this->gasolina << endl;
    }
}
bool curso::Coche::Repostar(float gasolina) {
    this->gasolina += gasolina;
    cout << "Repostando " << gasolina
         << ", deposito:" << this->gasolina << endl;
    return true;
}
curso::Coche::~Coche()
{
    cout << "Destruyendo coche de " << puertas << " puertas " << endl;
}
