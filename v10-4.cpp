#include <iostream>
#include <fstream>
using namespace std;
int main () {
    int n,nr,x,i;
    ifstream f("v10.txt");
    f>>n;
    for(i=1;i<=n;i++) {
        f>>nr;
        x=2;
        while(x<nr) {
            x*=2;
        }
        cout<<x<< " ";
    }


}


