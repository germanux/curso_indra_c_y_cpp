#include "EjemploLista.h"
#include "stdlib.h"

EjemploLista::EjemploLista()
{
    //ctor
}
void EjemploLista::GestionarInt() {
    listaInt.push_back(6);
    listaInt.push_back(7);
    listaInt.push_back(8);

    list<int> listaAdju(3, 9); ///9,9,9

    list<int>::iterator it = listaAdju.begin();
    for ( ; it != listaAdju.end(); it++ ) {
        listaInt.push_back(*it);
        cout << *it << endl;
    }
    it = listaInt.begin();

    while (it != listaInt.end()) {
        cout << " - " << *it << endl;
        it++;
    }
}
void EjemploLista::GestionarDob() {
    listaDob.push_back(new double(6.5));
    double* ptr_d = (double*) malloc(sizeof(double));
    *ptr_d = 7.2;
    listaDob.push_back(ptr_d);
    listaDob.push_back(new double(8.8));

    list<double*>::iterator it = listaDob.begin();

    while (it != listaDob.end()) {
        cout << " - " << **it << endl;
        it++;
    }
}
EjemploLista::~EjemploLista()
{
    //dtor
}
