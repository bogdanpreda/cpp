#include <iostream>
#include <string.h>
using namespace std;
int main() {
int i=0,n=0,p;
char v[100][255];
char s[]="maine este proba la informatica";

strcat(s," ");
while(i<strlen(s)) {
    if(strchr(s,' ')) {
        p=strchr(s,' ')-s;
        n++;
        strncpy(v[n],s,p);
        strcpy(s,s+p+1);
    }
}
for(i=1;i<=n;i++) {
        if(strchr("aeiou",v[i][0])) {
            for(int k=strlen(v[i])-1;k>=0;k--)
                cout<<v[i][k];
                cout<<" ";
        }

    cout<<v[i]<< " ";
}
}





