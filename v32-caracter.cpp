#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main() {
char c1,c2;
char s2[100];
int i,ok=0,p;
i=0;
cin>>c1;
cin>>c2;
cin.get(s2,250);
cout<<s2<<endl;
    for(int i=0;i<strlen(s2);i++) {
        if(s2[i]==c1) s2[i]=c2;
        else if(s2[i]==c2) s2[i]=c1;
    }
cout<<s2;

}

