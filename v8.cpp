#include <iostream>
using namespace std;
int n,p,i,j,v[20][20],nr=0;
int nr_perfect(int nr) {
    return nr*nr;
}
int main() {
    cin>>n;cin>>p;
for(i=1;i<=n;i++)
    for(j=1;j<=p;j++) {
        v[i][j] = nr*nr;
        nr+=2;
}
for(i=1;i<=n;i++) {
    for(j=1;j<=p;j++)
        cout<<v[i][j]<<" ";
    cout<<endl;
}
}
