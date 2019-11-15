#include "Lider.h"

Lider::Lider(string nombre, string genero, short edad, string hecho, string equipo)
:Hacedor(nombre, genero, edad, hecho), equipo(equipo){}

string Lider::getEquipo()
{
    return equipo;
}

string Lider::pensamiento()
{
    cout<<getNombre()<<" pensamiento:"<<endl;
    return getHecho();
}
