/*
 * Autor: José García
 * josegarciapina2001@gmail.com
 * Sept 16, 2021
 */

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    //Creación de una calculadora
 float num1=0;
 float num2=0;
 string simb;

 cout <<"Primer numero:" << endl;
 cin>> num1;

 cout << "Operacion" << endl;
 cin>> simb;

 cout<<"Segundo numero" << endl;
 cin>> num2;

    cout<<"Este programa hace operaciones basicas entre dos numeros." << endl;

    if (simb=="*"){cout << "Resultado: " << num1*num2 << endl;}
    if (simb=="/"){cout<< "Resultado: " << num1/num2<< endl;}
    if (simb=="+"){cout<<"Resultado: " << num1+num2<< endl;}
    if (simb=="-"){cout<<"Resultado: " << num1-num2<< endl;}
    if (simb=="%"){cout<<"Resultado: " << fmod(num1, num2)<< endl;}
    return (0);
    }

