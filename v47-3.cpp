#include <iostream>
#include <fstream>
using namespace std;
int main() {
    int n,i,k,k2,nr,el=0,v[100],ok=0,m=0;
    ifstream f("v47-3.txt");
    f>>n;
    cout<<"k=";cin>>k;
    for(i=1;i<=n;i++) {
        k2=1;
        f>>nr;
        while(k2<=nr) {
            if(k2==nr) v[++el]=nr;
            k2*=k;
        }


    }
    for(i=1;i<=el;i++)
        cout<<v[i]<<" ";
}

