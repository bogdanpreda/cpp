#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,i,j,v[20][20],produs=1,ok=0;
    ifstream f("v38.txt");
    cout<<"n= ";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        v[i][j] = i+j;

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

}

