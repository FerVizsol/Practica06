//apertura.cpp
#include <fstream>
#include "aperturas.h"
using namespace std;

int main()
{
    int temp;
    start:
    cout << "Agregar Publicaciones" << endl;
    cout << "=====================" << endl;
    cout << "1. Agregar Armas Cortas" << endl;
    cout << "2. Agregar Armas Largas" << endl;
    cout << "3. Salir" << endl;
    cin >> temp;
    system("cls");
    switch (temp)
    {
    case 1:
    {
        cout << "¿Cuantos objetos ArmaCorta creara?" << endl;
        cin >> temp;
        GuardadoArmasCortas(temp);
        break;
    }
    case 2:
    {
        cout << "¿Cuantos objetos ArmaLarga creara?" << endl;
        cin >> temp;
        GuardadoArmasLargas(temp);
        break;
    }
    case 3:
    {
        exit(1);
    }
    default:
    {
        goto start;
    }
    }
}