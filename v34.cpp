#include <iostream>
using namespace std;
int main() {
    int n,i,nr,j,A[20][20];
    cout<<"n=";cin>>n;
    int k=2;
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++) {
            while(1==1) {
                if(k%3!=0) {
                   A[i][j] = k;
                   k+=2;
                } else k+=2;
            }

    }
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++)
            cout<<A[i][j]<<" ";
    cout<<endl;
    }
}






