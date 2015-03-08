#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i,n=0,p;
    char v[255][255];
    i=0;
    char s[] = "bine*albine*foarte*bine*";
    while(i<strlen(s)) {
        p=strchr(s,'*')-s;
        n++;
        strncpy(v[n],s,p);
        strcpy(s,s+p+1);
    }
    char f[255];
    strcpy(f,v[1]);
    for(i=1;i<=n;i++) {
        if(strcmp(f,v[i])!=0)
            cout<<v[i]<<"*";
        else cout<<"*";
    }
}
