#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;

int main () {
    ifstream f("v45-4.txt");
    int n,i,nr,maxi,v[1000];
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







