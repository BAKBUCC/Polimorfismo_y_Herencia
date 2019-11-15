#ifndef LIDER_H
#define LIDER_H
#include "Hacedor.h"


class Lider : public Hacedor
{
    string equipo;
    public:
        Lider(string="", string="", short=0, string ="", string="");
        string getEquipo();
        string pensamiento();
};

#endif // LIDER_H
