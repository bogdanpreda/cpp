#include <iostream>
using namespace std;
int f(int x,int y)
{if(x<=y) return x-y;
return f(y-x,x-1)+3;}
int main () {

cout<<f(11,7)<<endl;





}




