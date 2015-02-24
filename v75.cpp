#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,v[24][24],x=0,ok=1;
    cin>>m;cin>>n;

    for(i=1;i<=m;i+=2) {
            if(ok%2!=0) x = 0;
            else x=1;
        for(j=1;j<=n;j++) {
            v[i][j] = x;
            v[i+1][j] = x;
        }
        ok++;
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;

    }

}


