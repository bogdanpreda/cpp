
#include <iostream>
using namespace std;
int n,nr,a,i,v[100],j,s=0,ok=0;
int f(int a) {
    int minim=99999999;
    int d=2;
    while(a>1)
        if(a%d == 0) {
            if(d<minim) minim=d;
            a/=d;
        } else
            d++;

    return minim;
}
int main () {
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"nr";cin>>nr;

        if(nr==f(nr))
            v[++s] = nr;

    }
    for(i=1;i<=s;i++)
        cout<<v[i]<<" ";
    if(!s>0) cout<<"nu exista";

}

