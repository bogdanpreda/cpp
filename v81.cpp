#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,m,i,j,v[24][24],maxim,minim,mini,minj,aux=0,maxi,maxj;
    cin>>n;cin>>m;
    ifstream f("v81.txt");
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>v[i][j];
    minim = INT_MAX;
    maxim= INT_MIN;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(v[i][j] > maxim) {
                maxim = v[i][j];
                maxi=i;maxj=j;
            }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(v[i][j] <minim ) {
                minim = v[i][j];
                mini=i;minj=j;
            }
aux = v[mini][minj];
v[mini][minj] = v[maxi][maxj];
v[maxi][maxj] = aux;

    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;

    }

}



