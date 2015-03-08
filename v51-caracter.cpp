#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int F(int x, int y)
{ if(x==y) return 1;
 else
 { if(x<y)
 { x=x+y;
 y=x-y;
 x=x-y;
 }
 return 1+F(x-y,y);
 }
}
int main() {
    cout<<F(105,105)<<endl;
    int i,n=0,p,ok=0;
    char v[255][255];
    i=0;
    i=0;
    char s[] = "Ana, Bogdan au 18 ani.";
    /*while(i<strlen(s)) {
        if(!isalpha(s[i]) || !isspace(s[i]))
            ok=0;
            else ok=1;
        i++;
    }
    cout<<ok;
    *//*
    char d[] = "adsf12";
    for(i=0;i<strlen(d);i++) {
        if(d[i]>='a'&&d[i]<='z')
        cout<<d[i];
    }*/
    float c=123.34;
    cout<<endl<<floor(c);
}



