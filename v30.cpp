#include <iostream>
using namespace std;
int main() {
    int n,i,nr,j,A[20][20];
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i==1 || j==1) A[i][j] = 1;
        else A[i][j] = A[i][j-1]+A[i-1][j];
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<A[i][j]<<" ";
    cout<<endl;
    }
}





