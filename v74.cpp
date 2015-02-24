#include <iostream>
using namespace std;
int main() {
    int n,i,j,v[24][24],x;
    cin>>n;

    for(i=1;i<=n;i++) {
        x=0;
    if(i%2!=0)
        for(j=1;j<=n;j++) {
            v[i][j] = ++x;
        } else
            for(j=n;j>=1;j--) {
                v[i][j] = ++x;
            }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;

    }

}

