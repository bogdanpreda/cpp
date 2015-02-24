#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,m,i,j,v[20][20],nr=1,produs=1,ok=0;
    ifstream f("v69.txt");
    cout<<"n=";cin>>n;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        f>>v[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
            if(i>j) if(v[i][j]!=0) {
                ok++;
            }
        }

    if(ok) cout<<"Nu este triunghiulară superior";
else cout<<"Este triunghiulară superior";

}



