#include <iostream>
using namespace std;
int f(int i){
if (i>12) return 1;
else return 1+f(i+2);
}
int main (){
cout<<f(8);
}
