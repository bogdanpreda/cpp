#include <iostream>
using namespace std;
int main() {
long i,n,x=0,y=0,v[1000],S=0;
cin>>n;
for(i=1;i<=n;i++) {
    cout<<"v["<<i<<"]=";
    cin>>v[i];
}
for(i=1;i<=n;i++) {
    if(v[i]%2==0) {
        x=i;
        break;
    }
}
for(i=n;i>=1;i--) {
    if(v[i]%2==0) {
        y=i;
        break;
    }
}
for(i=x;i<=y;i++) {
        S+=v[i];
}
if(S==0) cout<<"NU EXISTA";
else cout<<s;
}

