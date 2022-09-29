#include <iostream>

using namespace std;

int main(){

// Cual es el mayor numero

int a,b,c,d;
int mayor;
cout<<"Ingrese los numeros\n";
cin>>a>>b>>c>>d;
mayor=a; //sup a es mayor

if(b>mayor) mayor=b;
if(c>mayor) mayor=c;
if(d>mayor) mayor=d;
cout<<"El mayor es: "<<mayor;

    return 0;
}
