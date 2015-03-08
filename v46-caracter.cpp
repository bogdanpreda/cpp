#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i,n=0,p;
    char v[255][255];
    i=0;
    char s[] = "examen de bacalaureat";
    while(i<strlen(s)) {
        if(strchr("aeiou",s[i])) {
            s[i]+=1;
        }
        i++;

    }
cout<<s<< " ";
}
