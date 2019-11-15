#include "Hacedor.h"

Hacedor::Hacedor(string nombre, string genero, short edad, string hecho)
:Persona(nombre, genero, edad), hecho(hecho){}

string Hacedor::getHecho()
{
    return hecho;
}

string Hacedor::pensamiento()
{
    cout<<getNombre()<<" pensamiento:"<<endl;
    return hecho;
}



