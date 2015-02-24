#include <iostream>
using namespace std;
int prim(int n) {
    int d=2;int s=0;
    for(d=2;d<=n/2;d++)
        if(n%d==0) s++;
    if(s==0) return 1;
    return 0;
}
int main () {
    int nr,i,j,v[100],n=0,aux,num=0;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"nr=";cin>>nr;
        if(prim(nr)) v[++num] = nr;
    }
    for(i=1;i<=num-1;i++)
        for(j=i+1;j<=num;j++) {
            if(v[i]>v[j]) {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    for(i=1;i<=num;i++)
        cout<<v[i]<<" ";
}



