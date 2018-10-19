#include <iostream>
#include <math.h>
#include "EjemploLista.h"
#include "Pila.h"

#define PI 3.141592653
#define DUP(x) x+x+5-5


using namespace std;

int minimo(int a, int b) {
    if (a <= b) return a;
    else return b;
}
template <class Tipo> Tipo minimoGen(Tipo a, Tipo b);

template <class Tipo> Tipo minimoGen(Tipo a, Tipo b)
{
    if (a <= b) return a;
    else return b;
}

void intercambiar(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
template <class T> void intercambiar(T* a, T* b)
{
    T aux = *a;
    *a = *b;
    *b = aux;
}
int main()
{
    Pila<char> miPila(6);
    miPila.Poner('A');
    miPila.Poner('C');
    miPila.Poner('E');
    miPila.Imprimir();

    EjemploLista *el = new EjemploLista();
    el->GestionarDob();
    el->GestionarInt();

    cout << 2 * PI;
    cout << 2 * 3.1456;
    cout << DUP(3);
    cout << 3+3+5-5;
    /// Enteros:
    int ia = 4, ib = 7;
    cout << "Min 4, 7 = " << minimo   (ia, ib) << endl;
    cout << "Min 4, 7 = " << minimoGen(ia, ib) << endl;
    /// Flotantes
    cout.precision(7);
    float fa = 4.123456789, fb = 7.123456789;
    cout << "Min 4.1, 7.1 = " << minimo   (fa, fb) << endl;
    cout << "Min 4.1, 7.1 = " << minimoGen(fa, fb) << endl;

    /// Double
    cout.precision(15);
    double da = 4.123456789, db = 7.123456789;
    cout << "Min 4.1, 7.1 = " << minimo   (da, db) << endl;
    cout << "Min 4.1, 7.1 = " << minimoGen(da, db) << endl;

    intercambiar(&ia, &ib);
    intercambiar(&fa, &fb);
    intercambiar(&da, &db);

    cout << "ia = " << ia << ", ib = " << ib << endl;
    cout << "fa = " << fa << ", fb = " << fb << endl;
    cout << "da = " << da << ", db = " << db << endl;

    return 0;
}
