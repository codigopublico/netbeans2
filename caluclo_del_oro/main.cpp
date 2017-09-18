/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 9 de septiembre de 2017, 20:51
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
#include "geometria.hpp"

using namespace std;

/*
 * 
 */
void prueva(){
    cilindro anillo;
    anillo.set(2, 2);
    anillo.setpeso(20);
    std::cout << "El volumen es .... " << anillo.volumen() << "\n";
    std::cout << "La dencidad es ....." << anillo.den() << "\n";
    
}
int main(int argc, char** argv) {
    prueva();
    return 0;
}

