#include <iostream>

using namespace std;
int main() {
    int n,v[100],i,j,aux;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n-1;i++) {
        for(j=i+1;j<=n;j++) {
            if(v[i]%2!=0 && v[j]%2!=0)
            if(v[i]>v[j]) {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=1;i<=n;i++) cout<<v[i]<<" ";
}


