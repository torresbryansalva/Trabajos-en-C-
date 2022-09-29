#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


struct {
int codigo, edad;
char nombre[15],apellido[15],genero[15];
}cliente[10]; //para el numero total de clientes por defecto solo se permite como maximo 10

int main(){

    int i, Mindex,modifclientes;
        //Mindex flujo de opciones
    cout<<"ingrese la cantidad de clientes: \n"<<endl;
    int total;
    cin>>total;
    do{
        cout<<"********MENU*******"<<endl;
        cout<<"1. ingresar datos\n";
        cout<<"2. mostrar clientes\n";
        cout<<"3. buscar clientes por codigo\n";
        cout<<"4. mostrar\n";
        cout<<"5. salir\n";

        cout<<"Seleccione una Operacion: ";
        cin>>Mindex;

        if(Mindex==1){
            for(i=1;i<=total;i++){
                cout<<"Ingrese Codigo Cliente: \n";
                cin>>cliente[i].codigo;
                cout<<"Ingrese Nombre Cliente: \n";
                cin>>cliente[i].nombre;
                cout<<"Ingrese Apellido Cliente: \n";
                cin>>cliente[i].apellido;
                cout<<"Ingrese Edad Cliente: \n";
                cin>>cliente[i].edad;
                cout<<"Ingrese Genero Cliente: \n";
                cin>>cliente[i].genero;
                cout<<"\n\n";

            }
        }
        if(Mindex==2){
            for(i=1;i<=total;i++){
                cout<<"--------------------"<<endl;
                cout<<"Codigo: "<<cliente[i].codigo<<endl;
                cout<<"Nombre: "<<cliente[i].nombre<<endl;
                cout<<"Apellido: "<<cliente[i].apellido<<endl;
                cout<<"Edad: "<<cliente[i].edad<<endl;
                cout<<"Genero: "<<cliente[i].genero<<endl;
                cout<<"--------------------"<<endl;
            }

          }
        if(Mindex==3){
            cout<<"Ingrese el codigo del cliente a buscar: \n";
            int opbuscar;
            cin>>opbuscar;
            for(i=1;i<=total;i++){
                if(opbuscar==cliente[i].codigo){
                cout<<"--------------------"<<endl;
                cout<<"Codigo: "<<cliente[i].codigo<<endl;
                cout<<"Nombre: "<<cliente[i].nombre<<endl;
                cout<<"Apellido: "<<cliente[i].apellido<<endl;
                cout<<"Edad: "<<cliente[i].edad<<endl;
                cout<<"Genero: "<<cliente[i].genero<<endl;
                cout<<"--------------------"<<endl;
                }

            }

        }
        if(Mindex==4){
            cout<<"--------------------"<<endl;
            int MayorEdad=0,MenorEdad=0,varones=0,mujeres=0;
            for(i=0;i<=total;i++){
                if(cliente[i].edad<18){
                    MayorEdad=MayorEdad+1;
                }
            }
            for(i=0;i<=total;i++){
                if(cliente[i].genero=="femenino"){
                      mujeres=mujeres+1;
                }
            }
            MenorEdad=total-MayorEdad;
            varones=total-mujeres;
            cout<<"cantidad de clientes mayores de edad: "<<MayorEdad<<endl;
            cout<<"cantidad de clientes menores de edad: "<<MenorEdad<<endl;
            cout<<"cantidad de clientes varones: "<<varones<<endl;
            cout<<"cantidad de clientes mujeres: "<<mujeres<<endl;

        }


    }while(Mindex!=5);
    cout<<"Fuera de rango de opciones";
    return 0;
}
