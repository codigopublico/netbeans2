/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 8 de septiembre de 2017, 17:06
 */

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

using namespace std;

/*
 * 
 */
void p2(){
int x = 0;
do{
    for(;x++;){
if (x%3 == 0)
{
cout << x << endl;
}
cout << x << "   " << endl;
break;
    }
    }while(x < 15);

}
void juego(){
    int d = rand()  % 500;
    int apuesta;
    std::cout << "\nInicio del juego\n";
    std::cout << "\n Tienes " << d << " euros\n";
    do{
    std::cout << "Cuanto quieres apuestar (para salir -1)" << "Tienes " << d << " pasta\n";
    std::cin >> apuesta;
    if(rand() % 2 == 0){
        d = d - apuesta;
    }else{
        d = d + apuesta;
    }
    }while(apuesta > 0 && d > 0);
    if(d < 0){
        for(int i = 0; i > d; i-- ){
            std::cout << "Game over , lavando un plato por cada euro desperdiciado" << "Te quedan " << (d - i) * -1 << "\n" ;
        }
    std::cout << "Tuviste que lavar  " << d * -1 << " platos\n";
    }else{
        std::cout << "Ganaste   " << d << " gramos de maria" << "\n";
    }
    
    
}
void p9(){
//tablas de multiplicar
    std::cout << "\n Mostradndo las tablas de multiplicar \n";
    for(int i = 0; i < 11; i++){
        std::cout << "Tabla del " << i << "\n";
        for(int ii = 0; ii < 11; ii++){
            std::cout << i << "*" << ii << " = " << ii * i << "\n"; 
        }
    }

}
void p8(){
int x = 0; 
for(;;) 
{ 
cout << "soy el " << x << endl; 
if (x == 10) 
break; 
x++; 
} 
}
void p7(){
    int aux;
    int n;
    std::cout << "\n Introduce numeros hasta que el total sume 100 o mas \n";
    do{
        std::cout << "Intrdoce numeros :   ";
        std::cin >> n;
        aux = aux + n;
    }while(aux <= 100);
}
void p6(){

int x = 0;
int numero = 0;
cout << "escribe el numero donde el program a terminará" << endl ;
std::cin >> numero;
while (x < 100)
{
if (x == numero)
{
    break;
}
std::cout << x << endl;
x++;
}
}
void p5(){
int x = 0;
while (x < 100)
{
    x++;
if (x%5 == 0)
{       
    continue;
}
cout << x << endl;
}
}
void p4(){
    int n;
    std::cout << "Dime un numero i te digo si es primo \n";
    std::cin >> n;
    if(esprimo(n)==0){
        std::cout << "El numero "<< n << " no es primo";
    }else{
        std::cout << "El numero " << n << " que diguiste es primo";
    }
    std::cout << "\n";
}
void p3(){
    int aux = 2;
    int n[aux];
    std::cout << "Dime dos numeros i te digo los numeros pares\n";
    for(int i = 0; i < aux ; i++){
        std::cin >> n[i];
    }
    for(int i = 0; i < aux; i++){
        
    }
    if(n[0] > n[1]){
    for(;n[0] > n[1]; n[1]++){
        if(espar(n[1]) == 1){
            std::cout << "El numero " << n[1] << " es par \n";
        
        }
    }
    }else{
        for(; n[1] > n[0]; n[0]++){
        if(espar(n[0]) == 1){
            std::cout << "El numero " << n[0] << " es par  \n";
        
        }
    }
    
    }
}

int main(int argc, char** argv) {
    //p2();
    //p3();
    //p4();
    //p5();
    //p6();
    //p1();
    //p7();
    p8();
    //p9();
    //juego();
    return 0;
}

