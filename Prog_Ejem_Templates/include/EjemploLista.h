#ifndef EJEMPLOLISTA_H
#define EJEMPLOLISTA_H

#include <list>
#include <iostream>
using namespace std;

class EjemploLista
{
    private:
        list<int> listaInt;
        list<double*> listaDob;
    public:
        EjemploLista();

        void GestionarInt();
        void GestionarDob();

        virtual ~EjemploLista();
};

#endif // EJEMPLOLISTA_H
