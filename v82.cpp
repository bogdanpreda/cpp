#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,m,i,j,v[24][24],maxim,minim,mini,minj,aux=0,maxi,maxj;
    cin>>n;
    ifstream f("v82.txt");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>v[i][j];
    minim = INT_MAX;
    maxim= INT_MIN;
    for(i=1;i<=n;i++)
            if(v[i][i] > maxim) {
                maxim = v[i][i];
                maxi=i;
            }
    for(i=1;i<=n;i++)
            if(v[i][i] <minim ) {
                minim = v[i][i];
                mini=i;
            }
aux = v[mini][mini];
v[mini][mini] = v[maxi][maxi];
v[maxi][maxi] = aux;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;

    }

}



