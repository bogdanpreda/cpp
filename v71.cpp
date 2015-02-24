#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=1,produs=1,x=0;
    ifstream f("v70.txt");
    cout<<"n=";cin>>n;
    for(j=1;j<=n;j++)
        for(i=1;i<=n;i++)
        v[i][j] = ++x;

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}




