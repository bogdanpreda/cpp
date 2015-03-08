#include <iostream>
#include <string.h>
using namespace std;
int main() {
int i=0,n=0,p;
char v[100];
char s[]="maine este   proba  la informatica";
s[0]-=32;
strcat(s," ");
for(i=0;i<strlen(s)-1;i++) {
if(s[i]!=' '&&s[i+1]==' ')
s[i]-=32;
else if(s[i]==' '&&s[i+1]!=' ')
s[i+1]-=32;

}
cout<<s;
}




