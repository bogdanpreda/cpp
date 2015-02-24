#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20];
    int i;
    cin.get(s,20);
    s[strlen(s)] = s[0]-32;
    for(i=strlen(s)-1;i>=0;i--) {
        if(s[i] == ' ' &&s[i+1]!=' ')
            s[i+1]-=32;
    }
    cout<<s;
}
/*
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[20];
    int i;
    cin.get(s,20);
    strcpy(s+2,s+4);
    cout<<s<<strlen(s)<<endl;

    for(i=strlen(s)-1;i>=0;i--) {
        if(!strchr("aeiou",s[i])) {
            cout<<s[i];break;
        }


    }
}
