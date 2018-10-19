#include "../include/Vehiculo.h"

curso::Vehiculo::Vehiculo(int ruedas)
{
    this->ruedas = ruedas;
    this->encendido = false;
    this->velocidad = 0;
    cout << "Vehiculo fabricado con "
         << ruedas << " ruedas" << endl;
}
bool curso::Vehiculo::Encender() {
    if ( ! this->encendido) {
        this->encendido = true;
        this->velocidad = 0;
        cout << "Arrancado" << endl;
        return true;
    } else {
        cout << "Ya arrancado" << endl;
        return false;
    }
}
bool curso::Vehiculo::Acelerar(float fuerza) {
    if ( this->encendido) {
        this->velocidad += fuerza / 10;
        cout << "Acelerando hasta " << velocidad << endl;
    }
}
curso::Vehiculo::~Vehiculo()
{
    cout << "Destruyendo Vehiculo de " << ruedas << " ruedas " << endl;
}
