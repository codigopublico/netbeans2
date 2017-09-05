/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 5 de septiembre de 2017, 14:50
 */

#include <cstdlib>
#include <iostream>
#include "funciones.h"
using namespace std;

/*
 * 
 */
void p0(){
    int aux = 3;
    int im[aux];
    int n2[aux];
    int aux2 = 0;
    int v[aux];
    std::cout << "Dime 3 numeros:   \n";
    for(int i = 0; i < aux; i++){
        std::cin >> im[i];
    }
    for(int i = 0; i < aux; i++){
        v[i] = im[i];
    }
    int *e = orden(im, aux);//la linea for es para pasar de puntero a un array.
    for(int i = 0; i < aux; i++){
        n2[i] = *e;
        *e++;
    }
    std::cout << "Numeros ordenados :.....::.....\n";
    for(int i = 0; i < aux; i++){
        std::cout << n2[i] << "  ";
    }
    std::cout << "Orden de entrada de los numeros :\n";
    std::cout << "\n";
    for(int i = 0; i < aux; i++){
        std::cout << v[i] << "  ";
        if(v[aux - 1] == n2[i] ){
            aux2 = i;
        }
    }
    std::cout << "\n";
    if(aux2 <= 1){
        std::cout << "El numero esta entre los dos primeros \n"  << "\n";
    }
}
int main(int argc, char** argv) {
    p0();
    return 0;
}

