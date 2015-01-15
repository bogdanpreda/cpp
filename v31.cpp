#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,nr,j,A[20][20],sum=0;
    ifstream f("v31.txt");
    n=5;m=5;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++) {
        f>>A[i][j];

    }
    for(j=1;j<=m;j++) {
        sum+=A[1][j]+A[n][j];
    }
    for(i=2;i<=n-1;i++)
        sum+=A[i][1]+A[i][n];
    cout<<sum<<endl;
}






