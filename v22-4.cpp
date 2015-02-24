#include <iostream>
#include <fstream>
using namespace std;
int f(int n)
{ if (n<=9) return 0;
if (n%4==0) return 0;

return 1+f(n-3);
 }
int main() {
cout<<f(22)<< " "<<endl;
    ifstream f("v22.txt");
    int n,a,i,b,x;
    f>>n;
    for(i=1;i<=n;i++) {
        f>>a;f>>b;
        x=2;
        while(x*2<=b) {
            x*=2;
            }
            if(x>=a && x<=b)
            cout<<x<< " ";
            else cout<<0<<" ";
    }
}
