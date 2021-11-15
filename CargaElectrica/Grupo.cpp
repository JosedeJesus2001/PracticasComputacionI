//
// Created by OMX-103453 on 14/11/2021.
//
#include "Grupo.h"
Grupo::Grupo() {
    Nombre=" ";
    pKa=0;
    Carga=0;

} //Accedemos a los private:
Grupo::Grupo(string NameGrupo, float PKAGrupo, int ChargeGrupo) {
    Nombre=NameGrupo;
    pKa=PKAGrupo;
    Carga=ChargeGrupo;
}//Getters
int Grupo::GetCharge() {
    return Carga;
}
float Grupo::GetPKA() {
    return pKa;
}
