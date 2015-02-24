#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
void f(int &a,int b)
{
 a=a-1;b=a+1;
cout<<a;cout<<b;

}
int main()
{
int a,b;
f(3,9);
cout<<endl<<a<<b;

 long x,max,y;
 int k=0;
 ifstream f("v32.txt");
 max=INT_MIN;
 while(f>>x)
 {
 if(x%2==0)
 {
 if(x>max)
 {
 y=max;max=x;
 }
 else
 if(y<x && max>x)
 y=x;
 k++;
 }
 }
 f.close();
 if(k<2)
 cout<<"0";
 else
 cout<<y<<" "<<max;
}
