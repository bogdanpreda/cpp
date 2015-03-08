#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main() {
char s[100];
char s2[100];
int i,ok=0,p;
i=0;
cin.get(s,100);
strcpy(s2,s);
while(i<strlen(s2)) {
    strcpy(s2,s);
    if(strchr("aeiou",s2[i])) {
    for(int j=i+1;j<strlen(s2);j++) {
        if(s2[i]==s2[j]) {
            strcpy(s2+j,s2+j+1);
        }
        strcpy(s2+i,s2+i+1);
    }
    cout<<s2<<endl;}
    i++;
}
}
