#include <iostream>
using namespace std;
int main() {
int i,n,v[1000],k=0;
cin>>n;
for(i=1;i<=n;i++) {
    cout<<"v["<<i<<"]=";
    cin>>v[i];
}
for(i=1;i<=n/2;i++) {
    cout<<v[i]<<" "<<v[n-k]<<" ";
    k++;
}
if(n%2!=0) cout<<v[k+1];
}
