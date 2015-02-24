#include <iostream>
#include <fstream>
using namespace std;
int main () {
    int x,i,j,v[100],n=0,maxim,aux,ok=0;
    ifstream f("v18.nr.txt");
    f>>maxim;
    while(f>>nr) {
        if(maxim<nr) {
            maxim=nr;
            ok++
        } else ok=0;
    }


}



