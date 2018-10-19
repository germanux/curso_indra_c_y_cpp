#ifndef PILA_H
#define PILA_H

#include <iostream>
using namespace std;

template <class T>

class Pila
{
    private:
        int numElem;
        T* cadena;
        int limite;
    public:
        Pila(int numEl = 10);
        void Poner(T elem);
        void Imprimir();
        virtual ~Pila();
};
template <class T> Pila<T>::Pila(int nelem) {
    this->numElem = nelem;
    this->limite = 0;
    this->cadena = new T(numElem);
}
template <class T> void Pila<T>::Poner(T elem) {
    if (limite < numElem) {
        cadena[limite] = elem;
        limite++;
    }
}
template <class T> void Pila<T>::Imprimir() {
    int i = 0;
    for (i = 0; i < limite; i++)
        cout << cadena[i] << endl;
}
template <class T> Pila<T>::~Pila()
{
    delete cadena;
}

#endif // PILA_H
