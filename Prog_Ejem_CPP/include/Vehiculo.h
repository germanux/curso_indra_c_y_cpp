#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
using namespace std;
namespace curso {

class Vehiculo
{
    private:
		int ruedas;
        bool luces;

    protected:
        bool encendido;
        float velocidad;

    public:
        Vehiculo(int ruedas);
        bool GetLuces() { return luces; }
        void SetLuces(bool lu) { luces = lu;}
        bool Encender();
        bool Apagar();
        bool Acelerar(float fuerza);
        bool Frenar(float fuerza);

        virtual void Mostrar() {
            cout << "Vehiculo de " << ruedas << " ruedas a "
				 << velocidad << " km/h " << endl;
        }
        virtual ~Vehiculo();
};

}
#endif // VEHICULO_H
