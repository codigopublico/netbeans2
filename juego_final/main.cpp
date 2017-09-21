/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 19 de septiembre de 2017, 17:47
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
int aux = 0;
int numero[100];
int *numer = new int[100];
using namespace std;
string *nombre[100];
/*
 * 
 */
class agenda{
    public:
        int auxp;
    void getreguistro(int numero, string nom)
    {
        for(int i = 0; numer[aux] == 0 && i < 100; i++){
        aux++;
        std::cout << aux << "  " << numer[aux] << "      \n";
        }
        numer[aux] = numero; 
        *nombre[aux] = nom; 
        std::cout << *nombre[aux] << "   ";
        auxp = aux;
    }
    void setreguistro(){
        std::cout << "Numero de telefono: " << numer[auxp] << "Nombre del segueto  " << *nombre[auxp] << "\n";
    }
    void borrar(){
        numer[auxp] = 1;
    }
};
    

void p2(){
    numer = &numero;
    for(int i = 0; i < 100; i++){
        numer = 1;
        numer++;
    }
    agenda manolo;
    manolo.getreguistro(32, "siete");
    manolo.setreguistro();
    
}
int main(int argc, char** argv) {
    p2();

    return 0;
}

