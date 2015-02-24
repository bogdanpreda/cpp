#include <iostream>
using namespace std;
<<<<<<< HEAD

int main () {
    int nr=0,i,j,v[100],n=0,aux,num=0,x[100],s=0,ok=0;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"nr=";cin>>v[i];
    }
    for(i=1;i<=n;i++) {
    ok=0;
        if(v[i]%2==0) {
            s++;ok=1;
        } else ok=0;
        if(ok==0) {
            x[++nr] = s;
            s=0;
        }


    }
    for(i=1;i<=nr;i++)
    cout<<x[i]<<" ";




}
=======
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


>>>>>>> 15a79969c04ba798c5144b271955881198488cd8




