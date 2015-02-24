/*varianta 37 ex3
Scrieţi un program C/C++ care citeşte numerele naturale nenule n şi k (k≤n≤100) şi un
tablou unidimensional cu n elemente numere întregi, fiecare având cel mult 4 cifre.
Programul modifică tabloul, permutând circular cu k poziţii spre stânga, elementele acestuia
şi afişează pe ecran, pe o singură linie, separate prin câte un spaţiu, elementele tabloului
obţinut.
Exemplu: dacă n=4, k=3 şi tabloul v=(1,2,3,4), atunci se vor afişa în ordine elementele:
4 1 2 3.
*/
#include <iostream>
using namespace std;
int main () {
    int nr=0,i,j,v[100],n=0,aux,num=0,x[100],s=0,ok=0,k;
    cin>>n;
    for(i=1;i<=n;i++) {
        cout<<"nr=";cin>>v[i];
    }for(j=1;j<=3;j++){
    //aux=v[1];

    for(i=1;i<=n-1;i++) {
        //v[i]=v[i+1];
        aux=v[i];
        v[i]=v[i+1];
        v[i+1]=aux;

    }
    //v[n]=aux;
    }
    for(i=1;i<=n;i++)
    cout<<v[i]<<" ";


}





