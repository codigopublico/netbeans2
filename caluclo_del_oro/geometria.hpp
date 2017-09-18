/* 
 * File:   geometria.hpp
 * Author: prog
 *
 * Created on 9 de septiembre de 2017, 23:47
 */

#ifndef GEOMETRIA_HPP
#define	GEOMETRIA_HPP
const double pi = 3.14;
class cilindro : public dencidad{
public:
    //pi * r^2 * h
    int r;
    int h;
    int v;
    void set(int rr, int hh){ r = rr; h = hh;}
    int volumen(){ v = pi * r * r * h;  return v;}
};
class dencidad{
public:
    int g;
    int d;
    int v;
    void setpeso(int gg){g = gg;}
    int den(){ int d = v/g; return v/g; }
};


#endif	/* GEOMETRIA_HPP */

