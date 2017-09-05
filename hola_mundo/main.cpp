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
    int n[aux];
    int n2[aux];
    std::cout << "Dime 3 numeros:   \n";
    for(int i = 0; i < aux; i++){
        std::cin >> n[i];
    }
    int *e = orden(n, aux);
    for(int i = 0; i < 3; i++){
        std::cout << "\n   " << *e << "\n";
        *e++;
        n2[i] = *e;
    }
}
int main(int argc, char** argv) {
    p0();
    return 0;
}

