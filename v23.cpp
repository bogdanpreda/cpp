#include <iostream>
using namespace std;
int main() {
    int n,m,i,j,A[20][20];
        cout<<"n=";cin>>n;
        cout<<"m=";cin>>m;
        int num=1;int num2=2;
    for(i=1;i<=m;i++)
    for(j=1;j<=n;j++) {
        if(i==1) A[i][j] = num++;
        else if(j==1) A[i][j] = num2++;
        else A[i][j] = A[i-1][j] + A[i][j-1];
    }

    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++)
            cout<<A[i][j]<<" ";cout<<endl;
    }
}


