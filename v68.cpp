#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=1,produs=1;
    ifstream f("v68.txt");
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
        f>>v[i][j];
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
        if(i%2==0 && j%2!=0) {
            if(v[i][j] >= 0) produs*=v[i][j];
        }
    }
    cout<<produs<<  " "<<produs%10;
}
//eroare


