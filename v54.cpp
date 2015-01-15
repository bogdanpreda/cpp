#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int m,n,x,y,i,j,a[10][10],aux;
    ifstream f("t53.txt");
    cin>>n;
    cin>>x;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) {
        if(i%2==0) a[i][j] = x%10;
        else a[i][j] = x/10%10;
    }

    for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

}



