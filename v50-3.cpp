#include <iostream>
using namespace std;
int divxy(int x,int y) {
    if(x%y==0 || y%x==0)
        return 1;
    return 0;
}
int main () {
    int n,v[50],i,j,a,b,aux,ok=1;
    cin>>a;cin>>b;cin>>n;
    if(a>b) {
        aux=a;
        a=b;
        b=aux;
    }
    for(i=a;i<=b;i++){
        if(divxy(n,i)) cout<<i<<" ";
    }

}









