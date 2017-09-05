/* 
 * File:   main.cpp
 * Author: prog
 *
 * Created on 5 de septiembre de 2017, 19:17
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
void p0(){
    int x = 7;
if(x > 5 and x < 15)
{
cout << 1 << endl;
}
if (x > 5 or x < 15)
{
cout << 2 << endl;
}
if(!(x > 5)  and x < 15)
{
cout << 3 << endl;
}
if(x > 5 or !(x < 15)){
cout << 4 << endl;
}
if (!(x > 5 and x < 15))
{
cout << 5 << endl;
}
return0;
}
int main(int argc, char** argv) {
    p0();
    return 0;
}

