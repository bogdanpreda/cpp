#include <iostream>
#include <fstream>
using namespace std;
void f1(int x)
 {if (x<=9)

{ cout<<x+1;
f1(x+2);
}
}
int main() {
    f1(4);
    int a,b,c,p=0,nr;
    cin>>a;cin>>b;cin>>c;
    nr=c;
    while(nr+c<=b) {
        nr+=c;
        p++;

    }
    cout<<nr<< " "<<p;
}

