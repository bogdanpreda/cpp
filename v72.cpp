#include <iostream>
using namespace std;
int main() {
    int n,i,j,v[24][24],x=1;
    cin>>n;

    for(i=1;i<=n;i++)
    for(j=1;j<=n+1-i;j++) {
        v[i][j] = x++;
        v[n-j+1][n-i+1] = v[i][j];
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;

    }

}
