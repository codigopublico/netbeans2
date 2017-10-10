/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 23 de septiembre de 2017, 12:34
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <string.h>
using namespace std;

/*
 * 
 */
class garaje{
    public:
    int aux[2];
    int n[200][200];
    garaje(int fil, int col){
    aux[2];
    aux[0] = fil;
    aux[1] = col;
    n[aux[0]][aux[1]];
 for(int i = 0; i < aux[0]; i++){
        for(int ii = 0; ii < aux[1]; ii++){
            n[i][ii] = rand() % 5;
            if(n[i][ii] > 0){
                n[i][ii] == 1;
            }
        }
    }
    
    };
    void grafica(){
        std::cout << 0 << " ";
        for(int i = 0; i < aux[1]; i++){
            std::cout << i << " ";
        }
        std::cout << "\n";
        for(int i = 0; i < aux[0]; i++){
            std::cout << i << " ";
        for(int ii = 0; ii < aux[1]; ii++){        
            if(n[i][ii] == 0){
            std::cout << "0" << " ";
            }else{
                std::cout << "X" << " "; 
            }
        }
        std::cout << " \n"; 
    
    }
        for(int i = 0; i < 10; i++){
        std::cout  << " \n";
        }
    }
    void cambio(int p[], int r){
        if( r == n[p[0]][p[1]]){
            std::cout << "No se puede realizar el cambio de  \n" << p[0] << "  " << p[1] << "  " << r << "\n";
        }else{
        if(r > 0){
            
            std::cout << "entro el coche de la possicion: " << p[0] << "  " << p[1] << "\n";
        }else{
            std::cout << "Salio el coche de la possicion " << p[0] << "  " << p[1] << "\n";
        }
        }
        n[p[0]][p[1]] = r;
}
};
class vehiculo{
public:
    string color;
    int caballos;
    string marca;
    string modelo;
    vehiculo(){};
    vehiculo(string incolor, int incaballos, string inmarca, string inmodelo){
        color = incolor;
        caballos = incaballos;
        marca = inmarca;
        modelo = inmodelo;
    };
    void setcolor(string incolor){
        color = incolor;
    }
    void setcaballos(int incaballos){
        caballos = incaballos;
    }
    void setmarca(string inmarca){
        marca = inmarca;
    }
    void setmodelo(string inmodelo){
        modelo = inmodelo;
    }
    string getcolor(){
        return color;
    }
    int getcaballos(){
        return caballos;
    }
    string getmarca(){
        return marca;
    }
    string getmodelo(){
        return modelo;
    }
    //~vehiculo(){};
};
void p1(){
    string incolor;
    int incaballos;
    string inmarca;
    string inmodelo;
    incolor = "Rojo";
    incaballos = 200;
    inmarca = "Fiat";
    inmodelo = "alo";
    vehiculo camion(incolor, 200, inmarca, inmodelo);
    std::cout << "Este es el color:  " << camion.getcolor() << "\n";
    //camion.~vehiculo();
    //vehiculo camion;
    

}

void juego(){
    int p[2] = {10, 10};
    garaje aleatrio(p[0], p[1]);
    for(int i = 0; i < 1000000000; i++){
        int e[2] = {rand() % p[0], rand() % p[1]};
        int r = rand() % 5;
        if(r > 0){
            r = 1;
        }
        aleatrio.cambio(e, r);
        aleatrio.grafica();
        usleep(10);
}
}
int main(int argc, char** argv) {
    p1();
    cin.get();
    std::cout << "El siguiente ejercicio es : juego    \n";
    cin.get();
    juego();
    cin.get();
    return 0;
}

