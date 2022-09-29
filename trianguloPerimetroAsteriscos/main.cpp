#include <iostream>

using namespace std;

int main(){
int n;
cout << "Diamante de asteriscos\n";
cout<<"ingrese el tamaño:\n";
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=n;j>=i;j--){
    cout<<" ";
     }
    for(int k=0;2*i-1>k;k++){
    cout<<"*";
    }
    cout<<"\n";
}
for(int i=0;i<=n;i++){
    for(int j=0;j<i;j++){
    cout<<" ";
    }
    for(int k=2*n-1;2*i-1<=k;k--){
    cout<<"*";
    }
    cout<<"\n";
}
    return 0;
}
