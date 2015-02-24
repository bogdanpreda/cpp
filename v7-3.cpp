#include <iostream>
using namespace std;
int main() {
    int n,i,j,aux,v[100],nr;
    cin>>n;
    nr=1;
    for(i=1;i<=3*n;i++) {
        cout<<"v["<<i<<"]= ";cin>>v[i];
        nr++;
    }
    for(i=1;i<=n;i++) {
        aux=v[i];
        v[i] = v[n*2+i];
        v[n*2+i] = aux;
    }
    for(i=1;i<=3*n;i++) {
        cout<<v[i]<< " ";
    }
}
