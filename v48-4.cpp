#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
void divi(long i)
{ if(α==0)
cout<< β;
else
divi(i-1);
}
int main () {
    divi(36);
    ifstream f("v48-4.txt");
    int n,i,nr,maxi,v[522222];
    f>>n;f>>maxi;
    v[maxi]++;
    for(i=2;i<=n;i++) {
        f>>nr;
        if(nr>maxi) maxi=nr;
        v[nr]++;
    }
    for(i=1;i<=maxi;i++) {
        if(v[i]==1) cout<<i<<" ";
    }
}







