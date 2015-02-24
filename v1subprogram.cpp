#include <iostream>
using namespace std;
int v[100],i,n,a,nr=0,ok=0,j;
int sub(int v[],int n,int a) {
    nr=0;
    for(i=1;i<=n;i++)

        if(v[i]==a) nr++;
return nr;
}
int main () {
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"v["<<i<<"]= ";cin>>v[i];
    }
    for(j=1;j<=n;j++) {
        a = v[j];
        if(sub(v,n,a)>1)ok++;
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

}
