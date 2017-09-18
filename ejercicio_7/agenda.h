/* 
 * File:   agenda.h
 * Author: iper
 *
 * Created on 16 de septiembre de 2017, 12:38
 */
#ifndef AGENDA_H
#define	AGENDA_H
class agenda{
public:
    int aux = 0;
    int numer[255];
    char nombre[255][20];
    void getreguistro(int numero, char nom[20]){aux++; numer[aux] = numero; 
    for(int i = 0; i < 20; i++){
    nombre[aux][i] = nom[i]; 
    
    }
    }
    char setnombre(){ return nombre; }
};



#endif	/* AGENDA_H */

