#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream f("v46-4.txt");
    int n,i,nr,k,v[100],el=0;
    f>>n;
    cout<<"k=";cin>>k;
    for(i=1;i<=n;i++) {
        f>>nr;
        int s=0;
        for(int d=2;d<=nr/2;d++) {
            if(nr%d==0) s++;
        }
        if(d>=k) v[++el]=nr;
    }
    for(i=1;i<=el;i++)
        cout<<v[i]<<" ";

}








