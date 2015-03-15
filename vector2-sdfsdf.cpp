#include <iostream>
using namespace std;

void G(int k)
{ int i;
    int p[55];
for(i=1;i<=9;i++)
{p[k]=i;
if(i<=3)G(k+1);
else
cout<<p[0]<<p[1]<<p[2]<<endl;
}
}

int main() {

    G(0);/*int n,nr=0,v[50],k,r,i,j,b,a,aux;
    cin>>n;cin>>k;
    for(i=1;i<=n;i++) {
        cin>>v[i];
    }

    for(i=1;i<=k-1;i++)
    for(j=i+1;j<=k;j++)
        if(v[i]>v[j]) {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }

    for(i=n-k;i<=n-1;i++)
    for(j=i+1;j<=n;j++)
        if(v[i]<v[j]) {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
     for(i=1;i<=n;i++)
            cout<<v[i]<< " ";*/
}



