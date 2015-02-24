#include <iostream>
using namespace std;
int n,a,i,s=0,inv;
int f(int a) {
    s=0;
    int d=2;
    while(a>1)
        if(a%d == 0) {
            s++;
            a/=d;
        } else
            d++;

    return s;
}
int main () {
    cout<<"n=";cin>>n;
    int nr=n;
    while(n>0) {
        inv = inv*10+n%10;
        n/=10;
    }
    if(f(nr)==1 && f(inv)==1)
        cout<<"da";
    else cout<<"NU";

}

