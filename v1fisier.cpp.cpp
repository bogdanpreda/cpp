#include <iostream>
#include <fstream>
using namespace std;
int main() {
int n,i,ok=0;
ifstream f("v1.txt");
cin>>n;
while(f>>i) {
    if(i%n==0) {
        cout<<i<< " ";
        ok++;
    }

}
if(!ok) cout<<"nu exista";
}
