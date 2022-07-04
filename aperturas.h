//aperturas.h
#include "anequel.h"
#include <iostream>
#include <exception>
using namespace std;

class Miexcepcion : public exception
{
    public:
    const char* msg;
    Miexcepcion(const char* a) : msg(a){

    }
    //================================================
    const char* what() const throw()
    {
        return msg;
    }
};

Miexcepcion ErrorAbrir("Falló al abrir el archivo.");

void GuardadoArmasCortas(int a)
{
    try{
        ofstream archivo("cortas.dat",ios::binary);
        if(!archivo)
        {
            archivo.close();
            throw ErrorAbrir;
        }
        else
        {
        ArmaCorta* ptr;
        ptr = new ArmaCorta[a];
        for (int i=0; i<a; i++)
        {
            ptr[i].ingresar();
        }
        for (int i=0; i<a; i++)
        {
            archivo.write((char*) &ptr[i],sizeof(ArmaCorta));
        }
        archivo.close();
        }
    }
    catch(Miexcepcion& e)
    {
        cout << e.what() << endl;
        system("PAUSE");
        exit(1);
    }
    
}

void GuardadoArmasLargas(int a)
{
    try
    {
        ofstream archivo("larga.dat",ios::binary);
        if (!archivo)
        {
            archivo.close();
            throw ErrorAbrir;
        }
        else
        {
            ArmaLarga* ptr;
            ptr = new ArmaLarga[a];
            for (int i=0; i<a; i++)
            {
                ptr[i].ingresar();
            }
            for (int i=0; i<a; i++)
            {
                archivo.write((char*) &ptr[i],sizeof(ArmaLarga));
            }
            archivo.close();
        }
    }
    catch(Miexcepcion& e){
        cout << e.what() << endl;
        system("PAUSE");
        exit(1);
    }
}