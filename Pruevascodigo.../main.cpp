/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 5 de septiembre de 2017, 19:17
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
void p0(){
    int x = 7;
if(x > 5 and x < 15)
{
std::cout << 1 << std::endl;
}
if (x > 5 or x < 15)
{
std::cout << 2 << std::endl;
}
if(!(x > 5)  and x < 15)
{
std::cout << 3 << std::endl;
}
if(x > 5 or !(x < 15)){
std::cout << 4 << std::endl;
}
if (!(x > 5 and x < 15))
{
std::cout << 5 << std::endl;
}
}
void p1(){
int x = 0;
if (x > 5) {
x = 4;
if (x > 6) {
cout << 1 << endl;
}else {
cout << 2 << endl;
} }
}
void p2(){
    int x = 7;
int y = 7;
cout << "x = "<< x++ << endl;//Esto es despues de ejecutar se incrementa en 1
cout << "y = "<< ++y << endl;//Esto es antes de ejecutar se suma 1;
}
void p3(){
    int contador;
    contador++;
    contador = contador + 1;
}
void p4(){
bool iguales = false;
int x = 7;
int y = 8;
iguales = (x == y);
cout << "iguales? "<< iguales << endl;
}
void p5(){
int i = 2;
int ii = 4;
int n[i][ii];
for(int e = 0; e < i; e++){
for(int ee = 0; ee < ii; ee++){
n[i][ii] = e * ee;	
}}
for(int e = 0; e < i; e++){
for(int ee = 0; ee < ii; ee++){
std::cout << n[e][ee] << "  ";
}
std::cout << "\n";
}
}
int main(int argc, char** argv) {
    //p0();
    //p1();
    //p2();
    //p3();
    //p4();
    p5();
    return 0;
}

