#include <iostream>
#include <string>
#include "anequel.h"
using namespace std;

int main()
{
    Anequel <ArmaCorta>AnequelCorto(10);
    for(int i; i<10 ; i++){
        cout << AnequelCorto.Lista[i];
        system("PAUSE");
    }
}   