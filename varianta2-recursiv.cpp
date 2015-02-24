#include <iostream>
using namespace std;
int n;
void f(int n)
 { cout<<n%10;
if(n!=0)

{ cout<<n%10;
f(n/100);
}
}
int main() {
f(125);
}
