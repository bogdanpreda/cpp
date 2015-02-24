#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20];
    do{
        cout<<"n=";cin>>n;
        cout<<"m=";cin>>m;
    } while(!((n>=1&&n<=20)&&(m>=1&&m<=20)));
    int p = n*m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++) {
        v[i][j] = p;p--;
    }

    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++)
            cout<<v[i][j]<<" ";cout<<endl;
    }
}
