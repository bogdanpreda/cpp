#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    int i,n=0,p,ok=0;
    char v[255][255];
    i=0;
    i=0;
    char s[] = "Ana, Bogdan au  ani";
    while(i<strlen(s)) {
        if(isalpha(s[i]) ||isspace(s[i]))
            ok++;

        i++;

    }
    cout<<ok<<" "<<i;
    if(ok==i) cout<<"DA";
    else cout<<"NU";

}



