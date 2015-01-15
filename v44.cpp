#include <iostream>
using namespace std;
int main() {
    int n,i,j,v[20][20];
    cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i==1) v[i][j]=1;
        else v[i][j] =

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout<<v[i][j]<<" ";
            cout<<endl;
    }

}


