#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main() {
    int n,i,j,v[20][20],produs=1,ok=0;
    ifstream f("v38.txt");
    cout<<"n= ";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        f>>v[i][j];
    for(j=1;j<=n;j++) {
        int minim=INT_MAX;
        for(i=1;i<=n;i++) {
            if(v[i][j]<minim) minim=v[i][j];
        }
        for(i=1;i<=n;i++) {
            if(v[i][j] == minim)
                if(i+j == n+1) {produs*=minim;ok==1;}
        }
        }
    if(ok==0)cout<<produs<<" "<<produs%10;
    else cout<<"NU EXISTA";

}
