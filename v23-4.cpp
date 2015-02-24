#include <iostream>
#include <fstream>
using namespace std;
int n,x[100],i,j,aux;
void shift(int n, int x[]) {
    for(i=1;i<=n-1;i++) {
        aux=x[i];
        x[i]=x[i+1];
        x[i+1]=aux;
    }
}
int main() {
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"x["<<i<<"]= ";cin>>x[i];
    }
    for(i=1;i<=n;i++) {
        shift(i,x);
    }
    for(i=1;i<=n;i++) {
        cout<<x[i]<<" ";
    }
}
