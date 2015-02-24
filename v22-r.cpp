#include <iostream>
using namespace std;
void f(char c)
 { if (c>'A') f(c-1);
cout<<c;
if (c>'A') f(c-1);
 }

 void scrie (int x,int y)
{ if(x<y)

{ scrie(x+1,y-1);
cout<<(x+y)/2;
}
}
 int main() {
 f('B');
 cout<<endl;
 scrie(1,7);
 }
