#include "Persona.h"

Persona::Persona(string nombre, string genero, short edad)
:nombre(nombre), genero(genero), edad(edad){}

string Persona::getNombre()
{
    return nombre;
}

string Persona::getGenero()
{
    return genero;
}

short Persona::getEdad()
{
    return edad;
}

string Persona::pensamiento()
{
    cout<<nombre<<" pensamiento:"<<endl;
    return "necesito mejorar";
}

