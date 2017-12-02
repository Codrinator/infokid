	/*Sa se citeasca un sir de numere reale, pana la intalnirea numarului 800
 si sa se afiseze valoarea minima introdusa, suma si produsul elementelor sirului. */
#include <iostream>
using namespace std;
int main(){
    int n;
    float v[100], s, p, min;
    s=0;
    p=1;
    cout<<"Introduceti numarul de numere din sir:"<<endl;
    cin>>n;
    cout<<"Introduceti sirul:"<<endl;
    for(int i=1; i<=n; i++)
        cin>>v[i];
    min=v[1];
    for(int i=1;i<=n;i++){
        while(v[i]!=800){
            s=s+v[i];
            p=p*v[i];
        if(v[i]<min)
            min=v[i];
        }
    }
    cout<<"Suma numerelor din sir este: "<<s<<"."<<endl;
    cout<<"Produsul numerelor din sir este: "<<p<<"."<<endl;
    cout<<"Minimul este "<<min<<endl;
    return 0;
}


