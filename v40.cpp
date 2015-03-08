#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
int n,i,m=0,v[1000],nr,x,y;
cin>>n;
while(n>99) {
    v[++m] = n/10;
    n/=10;
}
for(i=1;i<=m;i++) {
    cout<<v[i]<<" ";
}

}


