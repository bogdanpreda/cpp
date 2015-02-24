#include <iostream>
#include <fstream>
using namespace std;
int main () {
    int nr,i,j,v[100],n=0,aux,ok=0;
    ifstream f("v14.nr.txt");
    while(f>>nr) {

        cout<<nr<<" ";
        ok++;

        if(ok==5) {cout<<endl;ok=0;}

    }


}


