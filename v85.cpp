#include <iostream>
#include <fstream>
#include <limits.h>

using namespace std;
int main() {
    int n,i,j,A[10][10],B[10][10],C[10][10];
    ifstream f("v85.txt");

    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        f>>A[i][j];
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        f>>B[i][j];

    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i<j)
            C[i][j] = A[i][j];
        else if(i>j)
            C[i][j] = B[i][j];
        else{
            if(A[i][j]<B[i][j])
                C[i][j] = A[i][j];
            else
                C[i][j] = B[i][j];
        }
    }

    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<C[i][j]<<" ";
        cout<<endl;
    }
}

