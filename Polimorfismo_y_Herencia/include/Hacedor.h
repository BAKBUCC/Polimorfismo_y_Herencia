#ifndef HACEDOR_H
#define HACEDOR_H
#include "Persona.h"


class Hacedor : public Persona
{
    string hecho;
    public:
        Hacedor(string="", string="", short=0, string ="");
        string getHecho();
        virtual string pensamiento();
};

#endif // HACEDOR_H
