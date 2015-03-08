#include <iostream>
#include <string.h>
using namespace std;
int main() {
char s[255] = "copiii*sunt*la***zoo";
int i=0;
while(i<strlen(s)-1) {
    if(s[i]==s[i+1]&&s[i]!='*') {
        cout<<s[i]<<s[i+1]<<endl;
        strcpy(s+i,s+i+1);}
    else i++;
}
char s2[] = "alfabet";
strcpy(s2,s2+2);
cout<<s2;
}
