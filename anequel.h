#pragma once
#include "armas.cpp"
using namespace std;

template <class tipoDato>
class Anequel
{
public:
    tipoDato* Lista;
    int Largo;
    Anequel(int);
    void metodo();
    template <class tipoDato1>
        friend ostream operator <<(ostream &, Anequel<tipoDato1> &);
    template <class tipoDato1>
        friend istream operator >>(istream &, Anequel<tipoDato1> &);
    template <class tipoDato>
    bool operator<(const Anequel<tipoDato>& d)
    {
        if (this->Largo < d.Largo)
        {
            return true;
        }else{
            return false;
        }
    }
    template <class tipoDato>
    bool operator<(const Anequel<tipoDato>& d)
    {
        if (this->Largo > d.Largo)
        {
            return false;
        }else{
            return true;
        }
    }
};

template <class tipoDato1>
ostream operator<<(ostream & out, Anequel<tipoDato1>& a)
{
    for (int i = 0; i < 10; i++){
        out << a.Lista[i] << endl;
    }
    return out;
};
template <class tipoDato1>
istream operator>>(istream& in, Anequel<tipoDato1>& a)
{
    //cambiar el precio a todas las armas
    in >> a;
    return in;
};

template <class tipoDato>
Anequel<tipoDato>::Anequel(int h) : Largo(h)
{
    Lista = new tipoDato[h];
};
