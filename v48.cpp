#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,i,j,v[10][10],k=2;
    cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        v[i][j] = k;
        k+=2;
    }
    for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }

}

