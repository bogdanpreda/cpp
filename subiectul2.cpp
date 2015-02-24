#include <iostream>
#include <fstream>
using namespace std;
int main () {
int p,u,n,s=0,i,j,v[20][20];
ifstream f("sub2.txt");
n=5;
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i+j==n+1) v[i][j]=n;
for(i=1;i<=n-1;i++)
    for(j=n-i;j>=1;j--)
        v[i][j] = v[i][j+1]-1;
for(i=2;i<=n;i++)
    for(j=n-i+2;j<=n;j++)
        v[i][j] = v[i][j-1]+1;

for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
        cout<<v[i][j]<< " ";
    cout<<endl;
}

}
