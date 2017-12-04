/* 
 * File:   hospi.cpp
 * Author: prog
 *
 * Created on 4 de diciembre de 2017, 16:03
 */
#include "hospi.hpp"
using namespace hos;
hospital::hospital(int n){
    Pprof = new profecional[n];
    total[0] = n;
    total[1] = 0;
}
