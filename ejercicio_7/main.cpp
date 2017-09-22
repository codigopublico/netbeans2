/* 
 * File:   main.cpp
 * Author: iper
 *
 * Created on 15 de septiembre de 2017, 17:15
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * Hola mundo cybernetico
 */
 class oagenda{
    public:
    int aux;
    int max;
    int numer[100];
    string nombre[100];
    oagenda();
    void setreguistro(int numero, string nom){
    int i = 0;
    while(i < max){
        std::cout << "numer  " << numer[i] << "\n";
        if(numer[i] == 0){
            break;
        }
        i++;
    }
    aux = i;
    std::cout << i << "    \n";
    nombre[aux] = nom; 
    numer[aux] = numero;
    std::cout << nombre[aux] << "   \n";
    }
    void mostrar(){
        for(int i = 0; i <= aux; i++){
            std::cout << "numero:  " << numer[i] << "\n" << "nombre: "<< nombre[i] << "  \n";
        
        }
        
    
    }
    void rmn(string nom){
        std::cout << "El nombre a eliminar es ....   " << nom << "\n";
        for(int i = 0; i <= aux; i++){
            if(nom == nombre[i]){
                nombre[i] = "0";
            }
        }
        
        }
 };
 oagenda::oagenda(){
     aux = 100;
     max = aux;
     numer[aux];
     nombre[aux];
     for(int i = 0; i < max; i++){
         numer[i] = 0;
         nombre[i] = "0";
         std::cout << "numer    " << numer[i] << " nombre   " << nombre[i] << "  " << i <<  "\n";
     }
 
 }
void fin(){
    std::cout << "Iniciando el fin\n";
    oagenda alex ;
    char nom[] = "laura";
    for(int i = 0; i < 30; i++){
    alex.setreguistro(34, nom);
    alex.setreguistro(12390, "desconocido");
    }
    alex.mostrar();
    alex.rmn(nom);
    alex.mostrar();
    //std::cout << alex.setnombre();
}
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


int main(int argc, char** argv) {
    //p1();
    //p2();
    //p3();//falta mirar el array de char.
    //p4();
    fin();
    return 0;
}

