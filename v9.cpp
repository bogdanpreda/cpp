#include <iostream>
#include <string.h>
using namespace std;
int main() {
int i;
char x[20];
strcpy(x,"bac2008");
for(i=3;i<strlen(x);i++)
cout<<x[i];
cout<<x<<endl;
}
