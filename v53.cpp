#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int m,n,x,y,i,j,a[10][10],aux;
    ifstream f("t53.txt");
    cin>>m;
    cin>>n;
    cin>>x;
    cin>>y;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++) {
        f>>a[i][j];
    }
    for(j=1;j<=n;j++) {
        aux = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = aux;
    }
    for(i=1;i<=m;i++) {
    for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

}


