#include <iostream>
#include <fstream>
using namespace std;
int main() {
int n,nr=0,i,v[100];
  ofstream g("BAC.TXT");
  cin>>n;
  for(i=0;i<=n;i++) {
    if(i%2==0) v[++nr]=i;
  }
  while(nr) {
    for(i=1;i<=nr;i++) {
        g<<v[i]<< " ";
    }
    g<<endl;nr--;
  }
  cout<<1234/10;
}
