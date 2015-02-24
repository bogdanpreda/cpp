#include <iostream>
using namespace std;


int main() {
int p1,p2,d=2,n=20,s=0,ok=0;
p1=n;
while(ok==0) {
s=0;
    for(d=2;d<=p1/2;d++) {
        if(p1%d==0) s++;
    }
    if(s==0) ok=1;
    else {ok=0;p1++;}
}

cout<<p1;
}
