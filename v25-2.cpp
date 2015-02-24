#include <iostream>
using namespace std;
int n, a[100],mini,maxi,aux;
void f(int &n, int a[],int i) {
    int mini=9999;
    int maxi = 0;
    int aux;
    for(int j=i;j<=n;j++) {
        a[j]=a[j+1];
    }n--;

}
int main() {
int i;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
for(int k=1;k<=n;k++)
    if(a[k] ==a[k+1]){
        f(n,a,k);k--;}
for(int k=1;k<=n;k++) {
cout<<a[k]<< " ";
}
}
