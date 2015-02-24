#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,i,j,v[10][10],nr=1,nr2=2;
    cout<<"n=";cin>>n;
    n=2*n;
    for(i=1;i<=n;i++)
    if(i%2!=0)
    for(j=1;j<=n;j++) {
        v[i][j] = nr;
        nr+=2;
    }
    else
    for(j=n;j>=1;j--) {
        v[i][j] = nr2;
        nr2+=2;
    }

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

