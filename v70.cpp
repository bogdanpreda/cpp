#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=1,produs=1,x;
    ifstream f("v70.txt");
    cout<<"m=";cin>>m;
    cout<<"n=";cin>>n;
    cout<<"x=";cin>>x;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++)
        f>>v[i][j];
    for(i=1;i<=m;i++)
        if(i==x) {
            for(j=1;j<n;j++)
            v[i][j] = v[i+1][j];
            m--;}
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}



