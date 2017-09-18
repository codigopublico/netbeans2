/* 
 * File:   funciones.h
 * Author: prog
 *
 * Created on 8 de agosto de 2017, 13:06
 */


#define	FUNCIONES_H

#ifdef	__cplusplus
extern "C" {
#endif
int esprimo(int n)
{
    int es=1;
    for(int i = 2; i < n; i++){
        if (n%i==0){
            es=0;
            break;
        }
        
    }
    return es;
}
int espar(int n)
{
    int es=0;
    if (n%2 == 0)
    {
        es = 1;
    }return es;
}
int naff(int n)
{ //esta es la funcion para decir si es possitivo o negativo.
    int es = 1;
    if (n > 0)
    {
        es = 0;
    }
return es;
}
int factor(int n){
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    return fact;
}
int media(int n[], int n2){
    int sum = 0;
    for(int i = 0; i < n2; i++){
        sum = sum + n[i];
    }
    return sum/n2;
}
int max(int n[], int a){
    int max = 0;
    for(int i = 0; i < a; i++){
        if(max < n[i]){
            max = n[i];
        }
    }
    return max;
}
int sumpor(int n, int p){
    return n + (n*p)/100;
}
int capital(int n,  int p, int a){
    for(int i = 0; i < a; i++ ){
        n = sumpor(n, p);
    }
    return n;
}
int comb(int m, int n){
    return factor(m)/factor(n)*(m-n);
}
int autosum(int n[], int a){
    int sum = 0;
    for(int i = 0; i < a; i++){
        sum = sum + n[i];
    }
    return sum;
}
int min(int n[], int a){
    int max = 99999999;
    for(int i = 0; i < a; i++){
        if(max > n[i]){
            max = n[i];
        }
         return max;
    }
}
int pot(int n[]){
    //este es para hacer potencias el primero del array es para hacer la base.
    int aux = 1;
    for(int i = 0; i < n[1]; i++){
        aux = aux * n[0];
    }
    return aux;
}
int fibo(int a){
    int n[a];
    for(int i = 0; i < a; i++){
        n[i] = 0;
    }
    int es = 0;
    int i = 2;
    n[0] = 0;
    n[1] = 1;
    while(i < a){
        i++;
        n[i] = n[i - 1] + n[i - 2];
    }
    es = n[i];
    return i;
}
int* orden(int n[], int n2){
int aux;
int i = 0;
while(i < n2 - 1){
    if(i < 0){
        i = 0;
    }
    if(n[i] < n[i+1]){
	if(i >= n2){
	aux = n[i];
        n[i] = n[i - 1];//es por esto que funciona mal el programa por i + 1. 
        n[i - 1] = aux;
        std::cout << "\nordenado numeros\n";
}else{
        aux = n[i];
        n[i] = n[i + 1];//es por esto que funciona mal el programa por i + 1. 
        n[i + 1] = aux;
        std::cout << "\nordenado numeros\n";
         for(int e = 0; e < n2; e++){
        std::cout << n[e] << "  ";
}
 	std::cout << "\n" << "El valor de la i es " << i << "\n";
        i--;
    } 
    }else{
        i++;
    }
}
int *r = new int[n2];
for(int i = 0; i < n2 ; i++){
    std::cout << n[i] << "  ";
}
r = n;
std::cout << "\n";
return r; //los errores pueden venir de aqui........
}
#ifdef	__cplusplus
#ifdef	__cplusplus
}
#endif
 
#endif	/* FUNCIONES_H */
