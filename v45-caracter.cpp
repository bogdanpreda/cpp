#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int i,n=0,p;
    char v[255][255];
    i=0;
    char s[] = "abbc";
    char f[255];
    while(i<strlen(s)) {
        strcpy(f,s);
        strcpy(f+i,s+i+1);
        i++;
        cout<<f<< " ";
    }

}

