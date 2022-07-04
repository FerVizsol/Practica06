#include "armas.h"
using namespace std;
int Armas::AntiguedadDias;
//==============================CLASE ARMAS DESARROLLO FUNCIONES==================================
    Armas::Armas() : Nombre("N/A"),CapacidadBalas(25),LicenciaNecesaria(true),Precio(100.50),Calidad(0.750)
    {

    }
    Armas::Armas(string name,int capacity,bool license,float price,double quality)
    {
        this->Nombre = name;
        this->CapacidadBalas = capacity;
        this->LicenciaNecesaria = license;
        this->Precio = price;
        this->Calidad = quality;
    }
    Armas::~Armas()
    {
        cout << "Se ha destruido " << this->Nombre << endl;
    }
    void Armas::ingresar()
    {
        string stemp;
        cout << "Nombre:";
        getline(cin,stemp);
        cout << endl << "Precio:";
        cin >> Precio;
        cout << endl << "Capacidad Balas:";
        cin >> CapacidadBalas;
        int temp;
        si:
        cout << "Licensia Necesaria?" << endl << "1 = Si ; 0 = No" << endl;
        cin >> temp;
        switch(temp){
        case 1:
        {
            LicenciaNecesaria = true;
            break;
        }
        case 2:
        {
            LicenciaNecesaria = false;
            break;
        }
        default:
        {
            goto si;
        }
        }
    }
    string Armas::get_nombre()
    {
        return Nombre;
    }
    int Armas::get_capacidadbalas()
    {
        return CapacidadBalas;
    }
    bool Armas::get_LicenciaNecesaria()
    {
        return LicenciaNecesaria;
    }
    float Armas::get_Precio()
    {
        return Precio;
    }
    double Armas::get_Calidad()
    {
        return Calidad;
    }
    void Armas::set_nombre(string i)
    {
        this->Nombre = i;
    }
    void Armas::set_capacidadbalas(int i)
    {
        this->CapacidadBalas = i;
    }
    void Armas::set_licencianecesaria(bool i)
    {
        this->LicenciaNecesaria = i;
    }
    void Armas::set_Precio(float i)
    {
        this->Precio = i;
    }
    void Armas::set_Calidad(double i)
    {
        this->Calidad = i;
    }

    void Armas::get_AntiguedadDias()
    {
        cout << Armas::AntiguedadDias;
    }
    ostream& operator<<(ostream& out,Armas& i)
    {
        cout << "====================== DATOS ======================" << endl;
        cout << "Nombre: " << i.Nombre << endl;
        cout << "Precio: " << i.Precio << endl;
        cout << "Calidad: " << i.Calidad << endl;
        cout << "Capacidad de balas: " << i.CapacidadBalas << endl;
        cout << "Requerimiento de Licencia: " << i.LicenciaNecesaria << endl;
        cout << "Antiguedad: "; i.get_AntiguedadDias(); cout << endl;
        return out;
    }
    istream& operator>>(istream& in,Armas& i)
    {
        in >> i.Precio;
        return in;
    }

//==============================CLASE ARMASCORTAS DESARROLLO FUNCIONES==================================

    string ArmaCorta::get_Tipo()
    {
        return Tipo;
    }
    void ArmaCorta::set_Tipo(string i)
    {
        this->Tipo = i;
    }
    ArmaCorta::ArmaCorta() : Armas()
    {

    }
    ArmaCorta::ArmaCorta(string a,int b,bool c,float d,double e) : Armas(a,b,c,d,e)
    {
        
    }
    ArmaCorta::~ArmaCorta()
    {
        cout << "Se ha destruido el arma corta: " << this->get_nombre() << endl;
    }
    ostream& operator<<(ostream& out ,ArmaCorta& i)
    {
        out << "====================== DATOS ======================" << endl;
        out << "Nombre: " << i.get_nombre() << endl;
        out << "Precio: " << i.get_Precio() << endl;
        out << "Calidad: " << i.get_Calidad() << endl;
        out << "Capacidad de balas: " << i.get_capacidadbalas() << endl;
        out << "Requerimiento de Licencia: " << i.get_LicenciaNecesaria() << endl;
        out << "Antiguedad: "; i.get_AntiguedadDias(); cout << endl;
        return out;
    }
    istream& operator>>(istream& in ,ArmaCorta& i)
    {
        in >> i.Precio;
        return in;
    }
//==============================CLASE ARMASLARGAS DESARROLLO FUNCIONES==================================

    string ArmaLarga::get_Tipo()
    {
        return Tipo;
    }
    void ArmaLarga::set_Tipo(string i)
    {
        this->Tipo = i;
    }
    ArmaLarga::ArmaLarga() : Armas()
    {

    }
    ArmaLarga::ArmaLarga(string a,int b,bool c,float d,double e) : Armas(a,b,c,d,e)
    {
        
    }
    ArmaLarga::~ArmaLarga()
    {
        cout << "Se ha destruido el arma larga: " << this->get_nombre() << endl;
    }
    ostream& operator<<(ostream& out,ArmaLarga& i)
    {
        out << "====================== DATOS ======================" << endl;
        out << "Nombre: " << i.get_nombre() << endl;
        out << "Precio: " << i.get_Precio() << endl;
        out << "Calidad: " << i.get_Calidad() << endl;
        out << "Capacidad de balas: " << i.get_capacidadbalas() << endl;
        out << "Requerimiento de Licencia: " << i.get_LicenciaNecesaria() << endl;
        out << "Antiguedad: "; i.get_AntiguedadDias(); cout << endl;
        return out;
    }
    istream& operator>>(istream& out,ArmaLarga& i)
    {
        //llamar a la sobrecarga de la clase padre
        out >> i.Precio;
        return out;
    }
//======================================================================================================







