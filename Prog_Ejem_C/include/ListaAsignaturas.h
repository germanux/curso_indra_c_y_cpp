#ifndef LISTAASIGNATURAS_H
#define LISTAASIGNATURAS_H

class ListaAsignaturas
{
    public:
        ListaAsignaturas();
        ~ListaAsignaturas();

        void Rellenar();
        void Mostrar();

    private:
        int cant;
        Asignatura *arrayAsig;
};

#endif // LISTAASIGNATURAS_H
