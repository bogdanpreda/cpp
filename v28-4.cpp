#include <iostream>
#include <fstream>
using namespace std;
void p (int x)

{ if(x!=0){p(x/10);
cout<<x%10;
}
}
int primul(int a) {
    int d=2;
    while(d<=a)
        if(a%d==0) return d;
        else d++;
}
int main() {
p(123);cout<<endl;
    int n,nr,i,j,x;
    ifstream f("v28-nr.txt");
    f>>n;
    for(i=1;i<=n;i++) {
        f>>nr;
        cout<<nr<<" ";
    }
}
