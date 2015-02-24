#include <iostream>
using namespace std;
int main() {
    int n,i,j,v[20][20];
    n=5;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i==1 || j==1) v[i][j] = i+j;
        else v[i][j] = v[i][j-1] + v[i-1][j];
    }

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";cout<<endl;
    }
}
