#include <iostream>
#include <string.h>
using namespace std;
int main() {
int i=0,n=0,p;
char v[100];
char s[]="LA BACALAUREAT SUBIECTELE AU FOST USOARE";

while(i<strlen(s)) {
    if(!strchr("AEIOU",s[i]) &&s[i]!=' ') {
        v[n++] = s[i];
    }
    i++;
}
v[n] = '\0';
cout<<v;
i=0;
for(i=0;i<strlen(v)-1;i++)
    for(int j=i+1;j<strlen(v);j++) {
        if(v[i]==v[j]) strcpy(v+j,v+j+1);
    }
cout<<endl;
for(int j=0;j<strlen(v);j++)
cout<<v[j]<< " ";
cout<<strlen(v);
}



