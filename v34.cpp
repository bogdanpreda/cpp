#include <iostream>
using namespace std;

int main () {
    int nr=0,i,j,v[100],n=0,aux,num=0,x[100],s=0,ok=0;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"nr=";cin>>v[i];
    }
    for(i=1;i<=n;i++) {
    ok=0;
        if(v[i]%2==0) {
            s++;ok=1;
        } else ok=0;
        if(ok==0) {
            x[++nr] = s;
            s=0;
        }


    }
    for(i=1;i<=nr;i++)
    cout<<x[i]<<" ";




}




