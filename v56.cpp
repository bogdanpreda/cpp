#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int m,n,k,y,i,j,a[10][10],aux;
    ifstream f("t53.txt");
    cin>>n;
    cin>>k;
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++)
        a[i][j] = 1;
        for(j=k+1;j<=n;j++)
        a[i][j] = 2;
    }


    for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

}




