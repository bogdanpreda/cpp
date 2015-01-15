#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,i,nr,j,A[20][20];
    ifstream f("v35.txt");
    cout<<"n=";cin>>n;

    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        f>>A[i][j];

    for(j=1;j<=n;j++) {
        int minim = INT_MAX;
        for(i=1;i<=n;i++){
            if(A[i][j]<minim) minim = A[i][j];
        }
        cout<<minim<<" ";
    }
}







