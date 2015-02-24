#include <iostream>
#include <fstream>
using namespace std;
int main () {
    int nr,i,j,v[100],n=0,aux;
    ifstream f("v2-nr.txt");
    while(f>>nr) {
        if(nr>0)
        v[++n] = nr;
    }
    for(i=1;i<=n-1;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]>=v[j]) {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++) {
        cout<<v[i]<<" ";
    }
    if(n==0) cout<<"nu exista";

}
