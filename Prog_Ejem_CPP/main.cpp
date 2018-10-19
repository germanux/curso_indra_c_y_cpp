#include <iostream>
#include "include/Coche.h"
#include "include/Vehiculo.h"
#include "include/Ciclomotor.h"

using namespace std;
using namespace curso;

void vehiculos();
void coches();
void vehiculosYCoches();

int main()
{
	cout << "Hola! " << endl;
	vehiculos();
    // coches();
    vehiculosYCoches();
	return 0;
}
/// Polimorfismo
void vehiculosYCoches() {
    Vehiculo *vehiculo = new Coche(8);
    vehiculo->Encender();
    vehiculo->Acelerar(70);
    vehiculo->Repostar(10);
    vehiculo->Mostrar();
    vehiculo->Vehiculo::Mostrar();
    Ciclomotor *cic = new Ciclomotor(2);
    delete vehiculo;
}

void vehiculos() {
	Vehiculo *veh = new Ciclomotor(4);
	veh->Encender();
	veh->Acelerar(60);
	veh->Repostar(45);
	veh->Mostrar();
	delete veh;
}
void coches() {

	Coche miCoche(4);
	miCoche.Repostar(20);

	curso::Coche *ptrMiCoche2;
	miCoche.SetLuces(true);

	ptrMiCoche2 = new curso::Coche(6);
	delete ptrMiCoche2;

	if (miCoche.GetLuces()) {
		cout << "Luces encendidas." << endl;
	}
	curso::Coche cocheCopia(0);
	curso::Coche *ptrCocheCopia;

	cocheCopia = miCoche;
	ptrCocheCopia = &miCoche;

	miCoche.SetPuertas(5);
	miCoche.Mostrar();
	cocheCopia.Mostrar();
	ptrCocheCopia->Mostrar();
}
