/* 
 * File:   hospi.hpp
 * Author: prog
 *
 * Created on 4 de diciembre de 2017, 16:03
 */

#ifndef HOSPI_HPP
#define	HOSPI_HPP
#include <iostream>
#include <string>
using namespace std;
namespace hos{
    void limpiar(int n){
        for(int i = 0; i < n; i++){
            std::cout << ".\n";
        }
    }
class persona{
public:
    struct Spersona{
        string Nombre;
        int telf;
        Spersona(){
            Nombre = "0";
            telf = 0;
        }//este es el contructor de la classe
        Spersona operator=(const Spersona &a){//tengo que hacer un operador igual que este pero para eliminar en la alura de profecional.
            Spersona res;
            res.Nombre = a.Nombre;
            res.telf = a.telf;
            return res;
        }//este es el contructor de copias para el editor.
        void operator-(Spersona &a){
            a.Nombre = "0";
            a.telf = 0;
        }
    }Spers;
};
class profecional : public persona{
public:
    int n; //esta es una referencia interna para hacer que no se descuarde todo.
    struct Sprofecional{
        float Planta;
        string especialidad;
        int horario[2]; //una es la que emplieza i la otra la que acaba;
        Sprofecional(){
            Planta = 0;
            especialidad = "0";
            for(int i = 0; i < 2; i++){
                horario[i] = 0;
                
            }
        }
        Sprofecional operator=(const Sprofecional &a){
            Sprofecional res;
            res.Planta = a.Planta;
            res.especialidad = a.especialidad;
            for(int i = 0; i < 2; i++){
            res.horario[i] = res.horario[i];
            }
        }
        void operator-(Sprofecional &a){
            a.Planta = 0;
            a.especialidad = "0";
            for(int i = 0; i < 2; i++){
            a.horario[i] = 0;
            }
        }
    }Sprof;
};
class metge : public profecional {
public:
    metge();
};
metge::metge(){
    Sprof.especialidad = "Metgesa";
}
class limpia : public profecional{
public:
    limpia();
};
limpia::limpia(){
    Sprof.especialidad = "limpiadora";
}
class enfermeros : public profecional{
public:
    enfermeros();
};
enfermeros::enfermeros(){
    Sprof.especialidad = "Enfermeras";
}
class hospital : public enfermeros,  public limpia,  public metge{
public:
  profecional *Pprof;
  profecional *Prprof;
  float total[2];//primero es el virtual i el segundo es el real de las classes entradas.
  hospital(int);//cuando termine tengo que meterlo todo en otro archivo diferenete
  void alta(const string&, const int&, const float&, const int[2]);
  profecional* ver_planta(int);
};
}
hos::hospital::hospital(int n){
    std::cout << "Se crearon " << n << "  puestos de trabajo\n";
    Pprof = new profecional[n];
    Prprof = new profecional[n];
    for(int i = 0; i < n; i++){
        Pprof->n = i;
        Pprof++;
    }
    for(int i = 0; i < n; i++){
        Pprof--;
    }
    total[0] = n;
    total[1] = 0;
}
void hos::hospital::alta(const string &a, const int &b, const float &c, const int z[2]){
    while(Pprof->n != 0){
        Pprof--;
    }
   for(int i = 0; i < total[1]; i++){
       Pprof++;
   } 
   Pprof->Spers.Nombre = a;
   Pprof->Spers.telf = b;
   Pprof->Sprof.Planta = c;
   cout << "creaste a        " << Pprof->Spers.Nombre << "\n";
   cout << "De la planta ..  " << Pprof->Sprof.Planta << "\n";
   cout << "En el referncia ." << Pprof->n << "\n";
   for(int i = 0; i < 2; i++){
   Pprof->Sprof.horario[i] = z[i];
   }
   for(int i = 0; i < total[1]; i++){
       Pprof--;
   }
   if(total[1] < total[0] - 1){
       total[1]++;
   }
}
hos::profecional* hos::hospital::ver_planta(int n){
    //tiene que retornar un puntero a un arrays de profecionales.
    int aux = 0; 
    for(int i = 0; i < total[1]; i++){
        if(n == Pprof->Sprof.Planta){
            Prprof = Pprof;
            Prprof++;
            aux++;
            cout << Pprof->Sprof.Planta << "hacertaste!!!\n";
            cout << "Nombre:  " << Pprof->Spers.Nombre << "\n";
        }
        cout << "fallaste\n";
        cout << "Nombre:  " << Pprof->Spers.Nombre << "\n";
        Pprof++;
    }
    while(Pprof->n != 0){
        Pprof--;
    }
    for(int i = 0; i < aux; i++){
        Prprof--;
    }
    return Prprof;
    
}
#endif	/* HOSPI_HPP */

