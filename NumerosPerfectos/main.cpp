#include <iostream>

using namespace std;

int main(){
       int n,sum=0;
    double r;
    cout<<"Ingrese el numero\n";
    cin>>n;
    cout<<"Divisores son: ";
    for(int i=1;i<=n;i++){
        if(n%i==0){
        r=n/i;
        cout<<r<<"-";
        sum=sum+i;
        }
   }
cout<<"\n";
cout<<"suma de divisores: "<<sum-n;
cout<<"\n\n";
    return 0;
}
