#include <iostream>
using namespace std;
long n;
long sub(long n)
{  if(n<=5) return n;
   else { long k=5;
	  while(k<=n) k=k*2;
	  return k/2;
	}
}

int main() {
int s;
  cin>>s;
  while(s)
  { int n=sub(s);
    cout<<n<<" ";
    s=s-n;
  }
}
