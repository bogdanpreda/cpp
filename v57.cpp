#include <iostream>
using namespace std;
int main() {
    int n,a,i,j,v[25][25];
    cout<<"n=";cin>>n;
    cout<<"a=";cin>>a;

    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i<a) v[i][j] = 1;
        else if(i>a) v[i][j] = 2;
        else v[i][j] =0;
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

}
