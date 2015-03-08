#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i=0,j=0;
    char s2[]="calut";
    char s1[] = "bacalaureat";

    if(strlen(s1)>strlen(s2)) {
        char aux[]=s1;
        s2=s1;
        s1=s2;
    }
    while(i<strlen(s1)) {
        if(s1[i]!=s2[j])
        strcpy(s2+i,s2+i+1);
        else {i++;j++;}
    }
    if(strcasecmp(s1,s2)==0) cout<<"DA";
    else cout<<"NU";
}
