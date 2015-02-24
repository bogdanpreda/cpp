#include <iostream>
using namespace std;
int n,x[100],i,mini,maxi;
/*oid p(int n, int x[],int &mini, int &maxi, int &sum) {
    int i;
    int mini=9999;
    int sum=0;
    int maxi=-9999;
    for(i=1;i<=n;i++)
        if(x[i]<mini) mini=x[i];
    for(i=1;i<=n;i++)
        if(x[i]>maxi) maxi=x[i];
        cout<<mini<<" "<<maxi;
}*/
int main() {

    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"x["<<i<<"]=";cin>>x[i];
    }
    for(i=1;i<=n;i++) {
        cout<<x[i]<< " ";
    }
    for(i=1;i<=n;i++) {
        if(x[i]==5) {
            for(int j=i;j<=n;j++)
            x[j] = x[j+1];
        }
    }
    for(i=1;i<=n;i++) {
        cout<<x[i]<< " ";
    }
}
