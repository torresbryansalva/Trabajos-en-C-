#include <iostream>
#include <cmath>
using namespace std;

int main(){
double binario,decimal=0;
int digito,exp=0;
cout << "ingresa el numero: \n";
cin>>binario;

while((int)(binario/10!=0)){
 digito=(int)binario%10;
 if(digito==1||digito==0){
 decimal=decimal+digito*pow(2,exp);
 exp++;
 binario=(int)(binario/10);
 }
 else{
 cout<<"No es un Nro Binario \n";
 break;
 }
 }

 cout<<"Nro en decimal:"<<decimal<<"\n\n";

return 0;
}
