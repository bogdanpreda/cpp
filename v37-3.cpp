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
//varianta 38 ex3
void del(long x,int y) {
    int nr1,nr2,uc,p=1;
    nr1=x;
    while(nr1) {
        uc=nr1%10;
        if(uc<=y) {
            nr2+=uc*p;
            p*=10;
        }
        nr1/=10;
    }
    cout<<nr2;
//sfarsit varianta 38 ex3
}
int main () {
    del(37659,6);
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





