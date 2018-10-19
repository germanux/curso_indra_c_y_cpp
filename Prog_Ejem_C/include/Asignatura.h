#ifndef ASIGNATURA_H
#define ASIGNATURA_H


class Asignatura
{
    private:
        unsigned int m_Examenes;
        char *nombre;

    public:
        Asignatura();
        Asignatura(int num_exam, char *nom);
        ~Asignatura();

        void Rellenar();
        void Mostrar();
};

#endif // ASIGNATURA_H
