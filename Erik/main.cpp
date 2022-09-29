#include <iostream>

using namespace std;

int main(){

    double neto,neto_quin1,neto_quin2,neto_mensual,horas,saldo_quin1,saldo_quin2,saldo_mensual;
    int pago_hora=120,bono=500;
    double desc,iva,seg_soc,vivi;
    iva=16/100;
    seg_soc=4/100;
    vivi=5/100;

    cout << "Sueldo de un trabajador" << endl;
    cout <<"Ingrese las horas trabajadas\n";
    cin>>horas;
    // si las horas son menores a 20 horas
    if(horas<20){
        neto=horas*pago_hora;
        cout<<"El sueldo es: "<<neto;
    }
    // si las horas son mayor o igual a 20 horas
    else if(horas<=20){
       neto_quin1=15*horas*pago_hora+bono;
       desc=iva+seg_soc+vivi;
       saldo_quin1=neto_quin1*(1-desc);
        cout<<"saldo quincenal"<<saldo_quin1;
    }else if(horas>20){
       neto_mensual=30*horas*pago_hora+bono;
       neto_quin2=15*horas*pago_hora+bono;
        desc=iva+seg_soc+vivi;
        saldo_mensual=neto_mensual*(1-desc);
        saldo_quin2=neto_quin2*(1-desc);
        cout<<"saldo mensual: "<<saldo_mensual<<endl;
        cout<<"saldo quincenal: "<<saldo_quin2<<endl;
    }
    return 0;
}
