#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=1;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++) {
    nr = i;
    for(j=1;j<=m;j++) {
        v[i][j] = nr;
        nr+=5;
    }}
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}


