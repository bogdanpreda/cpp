#include <iostream>
#include <string.h>
using namespace std;
int main() {
char a[123];
strcpy(a,"Bac 2008 iulie");
for(int i=strlen(a);i>=0;i--)
cout<<a[i];
int n=strlen(a);
cout<<endl<<a[n-1];
}

