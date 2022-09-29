#include <iostream>

using namespace std;

int main(){
int n;
cout<<"Perimetro De Astericos\n";
cout<<"en un Cuadrado\n";
cout << "ingrese el lado: ";
cin>>n;
for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){
     if(j==1||j==n||i==1||i==n){
     cout<<"*";
     }else{
     cout<<" ";
     }
  }
  cout<<"\n";
}
    return 0;
}
