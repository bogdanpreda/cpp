#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,i,j,v[10][10],maxim,minim,mini,minj,maxi,maxj,aux;
    ifstream f("v83.txt");
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    f>>v[i][j];
    maxim = INT_MIN;
    minim = INT_MAX;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i+j==n+1) {
            if(v[i][j]<minim) {
                minim = v[i][j];
                mini=i;minj=j;
            }
        }
    }
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i+j==n+1) {
            if(v[i][j]>maxim) {
                maxim = v[i][j];
                maxi=i;maxj=j;
            }
        }
    }
    aux = v[mini][minj];
    v[mini][minj] = v[maxi][maxj];
    v[maxi][maxj] = aux;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
