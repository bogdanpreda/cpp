#include <iostream>
<<<<<<< HEAD

using namespace std;
int main() {
    int n,v[100],i,j,aux;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    for(i=1;i<=n-1;i++) {
        for(j=i+1;j<=n;j++) {
            if(v[i]%2!=0 && v[j]%2!=0)
            if(v[i]>v[j]) {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=1;i<=n;i++) cout<<v[i]<<" ";
}


=======
#include <fstream>
using namespace std;
int main() {
    int n,m,i,nr,j,A[20][20],sum=0;
    ifstream f("v31.txt");
    n=5;m=5;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++) {
        f>>A[i][j];

    }
    for(j=1;j<=m;j++) {
        sum+=A[1][j]+A[n][j];
    }
    for(i=2;i<=n-1;i++)
        sum+=A[i][1]+A[i][n];
    cout<<sum<<endl;
}






>>>>>>> 15a79969c04ba798c5144b271955881198488cd8
