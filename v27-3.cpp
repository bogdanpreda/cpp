#include <iostream>
using namespace std;
float nreal(int x, int y) {
    int s=0, nr, zece=1;
    nr=y;
    while(nr) {
        s++;
        nr/=10;
    }
    while(s) {
        zece*=10;
        s--;
    }
    float nr2 = (float)y/zece;
    return x+nr2;
}
int f (int x,int y)
{ if(x<=y)return 1+f(x+1,y);
return 0;
}
int primul(int a) {
    int d=2;
    while(d<=a) {
        if(a%d==0)
            return d;
        else d++;
    }

}
int main() {
    cout<<primul(25);
    cout<<endl;
    cout<<nreal(12,543);
    cout<<endl<<f(4,8);
}
