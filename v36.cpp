#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,m,i,nr,j,A[20][20];
    ifstream f("v36.txt");
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
        f>>A[i][j];

    for(j=m;j>=1;j--){
        int minim = INT_MAX;
        for(i=1;i<=n;i++)
            if(A[i][j]<minim) minim = A[i][j];
        cout<<minim<<" ";
    }

    }


