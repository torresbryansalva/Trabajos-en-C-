#include <iostream>

using namespace std;

int main(){
int s[10][10],n;
bool simetrica=true;
cout<<"ingrese tamaño de la matriz:\n";
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<"Digite el numero["<<i<<"]["<<j<<"]: ";
    cin>>s[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(s[i][j]!=s[j][i]){
        simetrica=false;
        }
    }
}
if(simetrica==true){
    cout<<"La matriz ES SIMETRICA";
}else{
    cout<<"La matriz NO es Simetrica";
}
return 0;
}
