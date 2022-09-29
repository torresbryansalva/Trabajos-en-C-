#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// el struct funciona como una clase pero lo puedes entender como si fuera un arreglo
// donde vamos almacenar los codigos y el nombres de todas asignaturas bajo un nombre llamado CURSO
struct {
int codigo;
char asignatura[30];
}curso[10]; // Aca se ingresa la cantidad MAXIMA de cursos que puede almacenar nuestro estructura

int main(){
    int i,key,total,buscar;
    cout<<"ingrese la cantidad de asignaturas\n";
    cin>>total;   // INGRESAMOS LA CANTIDAD QUE ASIGNATURAS QUE QUERAMOS REGISTRAR( va desde 1 has 10)

    do{
        cout<<"--------MENU-------"<<endl;
        cout<<"1. ingresar las asignaturas\n";
        cout<<"2. buscar una asignatura\n";
        cout<<"3. salir\n";
        cout<<"-------------------\n\n";
        cin>>key;
        if(key==1){
            for(i=1;i<=total;i++){ // bucle para ir agregando uno por uno el codigo y asigantura
                cout<<"Ingrese Codigo de Asignatura: "<<endl;
                cin>>curso[i].codigo;
                cout<<"Ingrese Nombre de Asigantura: "<<endl;
                cin>>curso[i].asignatura;
            }
        }
        if(key==2){  // bucle para buscar la asignatura, se buscara por el codigo
            cout<<"ingrese codigo a buscar: \n";
            cin>>buscar;
            for(i=1;i<=total;i++){
                 if(curso[i].codigo==buscar){
                    cout<<"--------------------\n";
                    cout<<"Codigo: "<<curso[i].codigo<<endl;
                    cout<<"Asignatura: "<<curso[i].asignatura<<endl;
                    break;
                 }
                 else{
                    cout<<"Curso NO Encontrado"<<endl;
                 }
            }
        }
    }while(key!=3);
    return 0;
}
