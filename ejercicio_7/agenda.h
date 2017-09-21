/* 
 * File:   agenda.h
 * Author: iper
 * Tengo que arreglar la libreria ademas de hacer que se pueda hacer un std i retornar el string de char.
 * Hacer el tren.
 * Created on 16 de septiembre de 2017, 12:38
 */
#define	AGENDA_H
#ifdef	__cplusplus
extern "C" {
#endif
#include <iostream>
#include <string>
    
    using namespace std;
    

    
    class agenda{
    public:
    int aux = 0;
    int numer[255];
    char *nombre[255][20];
    void getreguistro(int numero, char nom[20]){aux++; numer[aux] = numero; 
    for(int i = 0; i < 20; i++){
    *nombre[aux][i] = nom[i]; 
    std::cout << *nombre[aux][i] << "   ";
    }
    }
    
   

};
#ifdef	__cplusplus
}


#endif


	/* AGENDA_H */

