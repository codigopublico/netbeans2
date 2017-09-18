/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 15 de septiembre de 2017, 17:15
 */

#include <cstdlib>
#include <iostream>
#include "agenda.h"
using namespace std;

/*
 * Hola mundo cybernetico
 */
void p1(){
    int aux = 5;
    int precios[aux];
for(int i=0; i<5; i++)
{
    if(i > 0){
    precios[i] = i * 2;
    }else{
        precios[i] = 0;
    }
}
for(int i=0; i<5; i++)
{
    std::cout << "precios[" << i << "] " << " = " << precios[i] << "\n";
}

}
void p2(){
   int aux = 5;
    int precios[aux];

for(int i=0; i<5; i++)
{
     if(i > 0){
    precios[i] = i * 2;
    }else{
        precios[i] = 0;
    }
    std::cout << "precios[" << i << "] " << " = " << precios[i] << "\n";
}

}
void p3(){
    int aux = 10;
    int aux2 = 5;
    char nom[aux2][aux];
    std::cout << "Nombres\n";
    for(int i = 0; i < aux2; i++){
        for(int ii = 0; ii < aux; ii++){
        std::cin >> nom[i][ii];
	/*if(nom[ii][i] == "\0"){
		break;*/
}
        }
    
    std::cout << "El numbre de la escritura es \n";
    for(int i = 0; i < aux2; i++){
        for(int ii = 0; ii < aux; ii++){
	/*if(nom[i][ii] == "\0"){
		break;
	}*/
        std::cout << nom[i][ii];

        }
        std::cout << "\n";
    }

}
void p4(){
//completar aquí
    int aux[3] = {4, 5, 0};
    int precios[aux[0]][aux[1]];
    for(int i = 0; i < aux[0]; i++){
        for(int o = 0; o < aux[1]; o++){
        aux[2]++;
            precios[i][o] =  aux[2];
        }
    }
for(int i=0; i<4; i++)
{
for(int j=0; j<5; j++)
{
cout << precios[i][j] << " ";
}
cout << endl;
}

}
void fin(){
    agenda alex ;
    char nom[] = "laura";
    alex.getreguistro(34, nom);
    std::cout << alex.setnombre();

}
int main(int argc, char** argv) {
    //p1();
    //p2();
    //p3();//falta mirar el array de char.
    //p4();
    fin();
    return 0;
}

