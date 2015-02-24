#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,nr,j,A[20][20],produs=1,maxim=0;
    ifstream f("t26.txt");
    cout<<"n=";cin>>n;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++) {
        f>>A[i][j];
    }
    for(j=1;j<=n;j++) {
        for(i=1;i<=n;i++)
            produs*=A[i][j];
    cout<<produs<<" ";
    produs=1;
    }
}


