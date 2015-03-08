#include <iostream>
using namespace std;
int main() {
    int n,nr=0,v[50],k[50],r,i,j,b,a,aux;

    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>v[i];
    }
    for(i=1;i<=n;i++) {
        a=v[i];
        b=v[n];
        r=a%b;
        while(r) {
            a=b;
            b=r;
            r=a%b;
        }
        if(b==1) k[++nr]=v[i];

    }

    for(i=1;i<=nr-1;i++)
    for(j=i+1;j<=nr;j++)
        if(k[i]<k[j]) {
            aux=k[i];
            k[i]=k[j];
            k[j]=aux;
        }
     for(i=1;i<=nr;i++)
            cout<<k[i]<< " ";
}

//ex: n=8, vect. 16 7 6 3 1 5 9 14. Se va afisa 9 5 3 1
