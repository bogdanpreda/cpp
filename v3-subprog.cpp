#include <iostream>
using namespace std;
int s,a,p=1,nr,n,i,imp=0,x;
int cif (int a,int b) {
    s=0;
    nr = a;
    while(nr>0) {
        if(nr%10==b)s++;
        nr/=10;
    }
    return s;
}
int main () {

cout<<"n=";cin>>n;
cout<<cif(n,2)<<endl;
for(i=1;i<=9;i+=2) {
    if(cif(n,i)>0) {
        imp = cif(n,i);
        while(imp) {
            x = x*10+i;
            imp--;
        }
    }
}
cout<<x;
}

