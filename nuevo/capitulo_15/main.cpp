/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 4 de diciembre de 2017, 15:48
 */

#include <cstdlib>
#include <iostream>
#include "hospi.hpp"
using namespace std;

/*
 *  Este es el ejercicio 16 me equivoque en el nobmbre.
 */
void p1(){
    std::cout << "hola como estas?";
}
void p8(){
    int a = 5;
    int b[2] = {2, 4};
    hos::limpiar(12);
    hos::hospital Stcarme(a);
    Stcarme.alta("Maria", 0, 0, b);
    Stcarme.alta("Olga", 2, 2, b);
    Stcarme.alta("Carla", 2, 2, b);
    hos::limpiar(20);
    cout << Stcarme.Pprof->Spers.Nombre << "\n";
    Stcarme.Pprof++;
    cout << Stcarme.Pprof->Spers.Nombre << "\n";
    hos::profecional *Pprof = Stcarme.ver_planta(2);
    hos::limpiar(20);
    cout << Pprof->Spers.Nombre << "\n";
    Pprof++;
    cout << Pprof->Spers.Nombre << "\n";
}
int main(int argc, char** argv) {
    //p1(); //este es una prueva sin importacia.
    p8();
    return 0;
}

