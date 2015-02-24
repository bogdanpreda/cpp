#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=0;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++) {
        if(i==1)
        for(j=1;j<=m;j++) v[i][j] = ++nr;
    else if(i%2==0)
    for(j=m;j>=1;j--) {
        v[i][j] = ++nr;
    }
    else
        for(j=1;j<=m;j++) v[i][j] = ++nr;
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

