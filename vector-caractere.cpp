#include <iostream>
#include <string.h>
using namespace std;
int main() {
int i=0,n=0,p;
char v[100][255];
char s[]="bine*albine*foarte*bine*";

while(i<strlen(s)) {
    p=strchr(s,'*')-s;
    n++;
    strncpy(v[n],s,p);
    v[n][p]='\0';
    strcpy(s,s+p+1);
}
for(i=1;i<=n;i++)
cout<<v[i]<<" ";
cout<<v[2];
}


