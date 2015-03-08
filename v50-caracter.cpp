#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i,n=0,p,ok=0;
    char v[255][255];
    i=0;
    char s[] = "bacalaureat";
    while(i<strlen(s) && ok==0) {
            if(strchr("aeiou",s[i])) {
                strcpy(s+i,s+i+1);
                ok++;
                }
        i++;
        }
        cout<<s<< " "<<endl;
        i=0;
        ok=0;
       for(i=strlen(s)-1;i>=0;i--) {
            if(strchr("aeiou",s[i]) && ok==0) {
            strcpy(s+i,s+i+1);
            ok++;
        }
       }
       cout<<s;



}


