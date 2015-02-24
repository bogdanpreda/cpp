#include <iostream>
using namespace std;
int n;
int f(int n,int y)
{ if(n!=0)
{ y=y+1;
return y+f(n-1,y);
}
else return 0;
}
int main() {
cout<<f(3,1);
}
