#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
int main () {
    ifstream f("v41-4.txt");
    int n,i,nr,max_par,min_impar;
    max_par = INT_MIN;
    min_impar = INT_MAX;
    f>>n;
    for(i=1;i<=n;i++) {
        f>>nr;
        if(nr%2==0 && nr>max_par) max_par = nr;
        else if(nr%2!=0 && nr<min_impar) min_impar = nr;
    }
    cout<<max_par<< " "<<min_impar;
}




