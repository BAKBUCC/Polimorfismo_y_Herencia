#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

using namespace std;

class Persona
{
    short edad;
    string nombre, genero;
    public:
        Persona(string="", string="", short=0);
        string getNombre();
        string getGenero();
        short getEdad();
        virtual string pensamiento();
};

#endif // PERSONA_H
