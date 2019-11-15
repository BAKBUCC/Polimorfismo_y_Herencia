#include <iostream>
#include "Lider.h"

using namespace std;

void imprimirPensamiento(Persona *pt)
{
    cout<<pt->pensamiento()<<endl;
}

int main()
{
    Persona p("Rony","Niño",19);

    Hacedor h("Juan Carlos", "Varon", 45, "Organizarme");

    Lider l("Chrollo Lucilfer", "Hombre", 26, "Hacer feliz a mi equipo en base a nuestro objetivo", "Prudencia");

    Persona *todos [3];
    todos[0]=&p;
    todos[1]=&h;
    todos[2]=&l;
    for(int i=0;i<3;i++)
    {
        imprimirPensamiento(todos[i]);
        cout<<endl;
    }
    return 0;
}
