//
// Created by OMX-103453 on 14/11/2021.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H
#include "string"
using namespace std;

class Grupo {
private:
   string Nombre;
   float pKa;
   int Carga;
public:
    //Constructor
    Grupo(string, float, int )
    Grupo();
    int GetCharge();
    float GetPKA();
};
#endif //CARGAELECTRICA_GRUPO_H
