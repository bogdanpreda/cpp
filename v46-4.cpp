#include <iostream>
using namespace std;
void cifre(long n,int &nc,int &sc) {
    int s=0,numere=0;
    while(n) {
        s+=n%10;
        numere++;
        n/=10;
    }
    nc=numere;
    sc=s;
}
int main () {
int sc,nc;
    long n=27989,nr;
      int s=0,numere=0;
    while(n) {
        s+=n%10;
        numere++;
        n/=10;
    }
    nc=numere;
    sc=s;
    cout<<nc<<" "<<sc;
}









