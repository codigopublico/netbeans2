/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 12 de septiembre de 2017, 17:25
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int suma(int n[], int aux){
    int r = 0;
    for(int i = 0; i < aux; i++){
        r = r + n[i];
    }
   return r; 
}
int resta(int n[], int aux){
    int r = 0;
    for(int i = 0; i < aux; i++){
        r = r - n[i];
    }
   return r; 
}
int multi(int n[], int aux){
    int r = 1;
    for(int i = 0; i < aux; i++){
        r = r * n[i];
    }
   return r; 
}
int divi(int n[], int aux){
    int r = 1;
    for(int i = 0; i < aux; i++){
        r = n[i] / r;
    }
   return r; 
}

void p8(){
    string oper[] = {"suma", "resta", "multiplicacion", "division"};
    int aux;
    std::cout << "Dime el numero de numeros a operar " << "\n";
    std::cin >> aux;
    int n[aux + 1];
    std::cout << "Dime los numeros que quieres operar \n";
    for(int i = 0; i < aux; i++){
        std::cin >> n[i];
    }
    std::cout << "Dime la operacion a hacer con ellos \n";
    for(int i = 0; i < 4; i++){
        std::cout << oper[i] << "  "<< i <<"\n";
    }
    std::cout << "\nDime el numero de la operacion\n";
    std::cin >> n[aux + 1];
    if(n[aux + 1] == 0){
        std::cout << "La suma es " << suma(n, aux) ;
    }
    if(n[aux + 1] == 1){
        std::cout << "La resta es " << resta(n, aux) ;
    }
    if(n[aux + 1] == 2){
        std::cout << "La multiplicacion es " << multi(n, aux) ;
    }
    if(n[aux + 1] == 3){
        std::cout << "La divicion es " << divi(n, aux) ;
    }
            
}
int main(int argc, char** argv) {
    p8();
    return 0;
}

