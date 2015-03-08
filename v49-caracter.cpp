#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i,n=0,p;
    char v[255][255];
    i=0;
    char s[] = "bacalaureat";
    while(i<strlen(s)) {
        if(!strchr("aeiou",s[i])) {
            strcpy(s+i,s+i+1);
        }
        i++;

    }
cout<<s<< " ";
}

