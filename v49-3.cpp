#include <iostream>
using namespace std;

int main () {
    int n,v[50],i,j,aux,ok=1;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n-1;i++)
    for(j=i+1;j<=n;j++)
        if(v[i]>v[j]) {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
    for(i=1;i<=n;i++)
        if(v[i+1]==v[i]+i) ok++;
    cout<<ok<<endl;
    for(i=1;i<=n;i++)
    cout<<v[i]<<" ";
    if(ok==n) cout<<"da";
    else cout<<"nu";
}








