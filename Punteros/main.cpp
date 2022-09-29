#include <iostream>

using namespace std;

int main(){
cout << "Operador direccion & \n";

// &nombreVariable

// Ejemplo

int *p,n; // p un puntero a n
          // n es un entero
n=10;
p=&n; /* asigno la direccion
      de la variable n en la
      variable p
      */

// Como obtengo el valor en p?

cout<<"el valor de p: "<<*p<<endl;

return 0;
}
