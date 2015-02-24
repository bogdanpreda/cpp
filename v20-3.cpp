#include <iostream>
using namespace std;
int a[100],i,j,n,aux;
void nule(int a[], int n) {
    for(i=1;i<=n-1;i++)
    for(j=i+1;j<=n;j++) {
        if(a[i]==0) {
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
        }
    }
    for(i=1;i<=n;i++) {
cout<<a[i]<<" ";
}
}
int main() {

cin>>n;
for(i=1;i<=n;i++) {
cout<<"a["<<i<<"]=";cin>>a[i];
}
nule(a,n);

}
