#include <iostream>
using namespace std;
int main() {
    int n,i,j,v[20][20];
    cin>>n;
    for(i=1;i<=n;i++)
        v[i][i]=2;
    for(i=1;i<=n-1;i++)
    for(j=i+1;j<=n;j++)
        v[i][j] =1;
    for(i=2;i<=n;i++)
        for(j=1;j<=i-1;j++)
        v[i][j] = 3;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
            cout<<endl;
    }

}

