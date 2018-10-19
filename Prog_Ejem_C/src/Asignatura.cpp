#include "Asignatura.h"

Asignatura::Asignatura() {
}
Asignatura::Asignatura(int num_exam, char *nom)
{
    this->m_Examenes = num_exam;
    this->nombre = nom;
}
Asignatura::~Asignatura()
{
    //dtor
}

void Asignatura::Rellenar() {
    printf("Asignatura: Nombre?\n");
    scanf("%s", this->nombre);
    printf("Examenes?\n");
    scanf("%d", &this->m_Examenes);
}
void Asignatura::Mostrar() {
    printf("Asignatura %s (%d examenes)\n",
           this->nombre,
           this->m_Examenes);
}

void main() {
    Asignatura *asig;
    asig = new Asignatura();
    asig->Rellenar();

    asig->Mostrar();
}
