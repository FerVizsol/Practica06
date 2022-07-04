#pragma once
#include <exception>
#include <string>
#include <iostream>
using namespace std;

class Armas{
    string Nombre;
    int CapacidadBalas;
    bool LicenciaNecesaria;
    //calidad (Mala)0-1(Buena)
    double Calidad;
    static int AntiguedadDias;
    public:
    float Precio;
    void ingresar();
    Armas();
    Armas(string,int,bool,float,double);
    ~Armas();
    string get_nombre();
    int get_capacidadbalas();
    bool get_LicenciaNecesaria();
    float get_Precio();
    double get_Calidad();
    void set_nombre(string);
    void set_capacidadbalas(int);
    void set_licencianecesaria(bool);
    void set_Precio(float);
    void set_Calidad(double);
    static void get_AntiguedadDias();
    friend ostream& operator<<(ostream&,Armas&);
    friend istream& operator>>(istream&,Armas&);
};

class ArmaCorta : public Armas
{
    string Tipo;
    public:
    string get_Tipo();
    void set_Tipo(string);
    ArmaCorta();
    ArmaCorta(string,int,bool,float,double);
    ~ArmaCorta();
    friend ostream& operator<<(ostream&,ArmaCorta&);
    friend istream& operator>>(istream&,ArmaCorta&);

};

class ArmaLarga : public Armas
{
    string Tipo;
    public:
    string get_Tipo();
    void set_Tipo(string);
    ArmaLarga();
    ArmaLarga(string,int,bool,float,double);
    ~ArmaLarga();
    friend ostream& operator<<(ostream&,ArmaLarga&);
    friend istream& operator>>(istream&,ArmaLarga&);
} ;

class ClaseListaUnaExcepciones : public exception
{
private:
    string mensaje;
public:
    ClaseListaUnaExcepciones(string m) : mensaje(m) {}
    string what()
    {
        return mensaje; 
    }
};