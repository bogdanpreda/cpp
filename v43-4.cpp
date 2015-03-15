#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;/*
var44
void P(int a, int b) {
    int i,aux,s=0;
    if(a>b) {
        aux=a;
        a=b;
        b=aux;
        for(i=2;i<=b;i++) {
        s=0;
            for(int d=2;d<=i/2;d++) {
                if(i%d==0) s++;
            }
            if(s==0 && i*i>=a &&i*i<=b) cout<<i*i<<" ";
        }
    }
}*/
int main () {
    ifstream f("v43-4.txt");
    int n,i,nr,maxi,v[1000];
    P(40,1);
    f>>n;f>>maxi;
    for(i=1;i<=n;i++) {
        v[i]=0;
    }
    for(i=2;i<=n;i++) {
        f>>nr;
        if(nr>=maxi) {
            v[nr]++;maxi=nr;
        }

    }
    cout<<v[maxi]<<" ";
}





