#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

void P(int a, int b) {
    int i,aux,s=0;
    if(a>b) {
        aux=a;
        a=b;
        b=aux;
        for(i=1;i<=b;i++) {
        s=0;
            for(int d=1;d<=i/2;d++) {
                if(i%d==0) s++;
            }
            if(s==1 && i*i*i>=a &&i*i*i<=b) cout<<i*i*i<<" ";
        }
    }
}
int main () {
    P(40,1);
    cout<<endl;
    ifstream f("v44-4.txt");
    int n,i,nr,maxi,v[1000];
    f>>n;f>>maxi;
    v[maxi]++;
    for(i=2;i<=n;i++) {
        f>>nr;
        if(nr>maxi) maxi=nr;
        v[nr]++;
    }
    for(i=1;i<=maxi;i++) {
        if(v[i]>1) cout<<i<<" ";
    }
}






