#include <iostream>
using namespace std;
int n,a,i,s=0,x;
void f (int x)
{ if(x>0)
{ cout<<'x';
f(x/3);
cout<<'y';
}
}
int main () {
f(26);
}
