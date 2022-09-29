#include <iostream>
#include <conio.h>
using namespace std;

int main(){
int n,k,valor,v[10];
cout<<"Cantidad de numeros\n";
cin>>n;
cout<<"ingrese "<<n<<" numeros\n";
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int j=0;j<n;j++){
    valor=v[j];
    k=j;
    while(k>0&&valor<v[k-1]){
        v[k]=v[k-1];
        k=k-1;
    }
    v[k]=valor;
}
cout<<"De menor a mayor: \n";
for(int j=0;j<n;j++){
    cout<<v[j]<<"-";
}
return 0;
}
