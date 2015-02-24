#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,j,v[10][10];
    ifstream f("t47.txt");
    m=4;n=3;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++) {
        f>>v[i][j];
    }
    for(i=1;i<=m;i++) {
    for(j=1;j<=n;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }cout<<endl;
    for(i=1;i<=m;i++)
        if(i%2!=0) {
            for(j=1;j<=n;j++) {
                v[i][j]=v[i+1][j];

            }
        }


     for(i=2;i<=m;i+=2) {
    for(j=1;j<=n;j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
