#ifndef CICLOMOTOR_H
#define CICLOMOTOR_H

#include "../include/Vehiculo.h"

using namespace curso;

class Ciclomotor : public Vehiculo
{
    public:
        /** Constructor por defecto*/
        Ciclomotor(int ruedas);
        /** Default destructor */
        virtual ~Ciclomotor();
// KLJkjlksjjdsf
/* asdf dfsf */
        /** Access manillas. No hace nada solo devuelve
         * \return The current value of manillas
         */
        float Getmanillas() { return manillas; }
        /** Set manillas
         * \param val New value to set
         */
        void Setmanillas(float val) { manillas = val; }

    protected:

    private:
        float gasolina; //!< Member variable "gasolina"
        float manillas; //!< Member variable "manillas"
};

#endif // CICLOMOTOR_H
