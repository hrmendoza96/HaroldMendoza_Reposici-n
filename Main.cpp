#include <iostream>
#include <string>
#include "Racional.h"

using namespace std;

void menu();

int main(int argc, char const *argv[]) {
  int opcion=0;
  do {
    menu();
    cin >> opcion;
    if(opcion==1){

    }
    if(opcion==2){

    }
    if(opcion==3){

    }
    if(opcion==4){

    }
    if(opcion==5){

    }
    if(opcion==6){
      cout << "Hasta Luego" << endl;

    }

  } while(opcion!=6);

  return 0;
}

void menu(){
    cout << "Bienvenido a la Calculador de Racionales" << endl;
    cout << "1) Sumar un entero con un Racional: " << endl;
    cout << "2) Sumar un Racional con otro Racional: " << endl;
    cout << "3) Restar un Racional con otro Racional: " << endl;
    cout << "4) Multiplicar un Racional con otro Racional: " << endl;
    cout << "5) Dividir un Racional con otro Racional: " << endl;
    cout << "6) Salir de la Calculadora" << endl;
    cout << "Ingrese su respuesta: " << endl;
}
