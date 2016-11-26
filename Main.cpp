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
      int numerador1=0,denominador1=0, entero=0;
      cout << "Ingrese el numerador para el primer Racional: ";
      cin>>numerador1;
      cout << endl;
      cout << "Ingrese el denominador para el primer Racional: ";
      cin>>denominador1;
      cout << endl;

      cout << "Ingrese el numero Entero: ";
      cin >> entero;
      cout << endl;

      cout << "El entero: "<< entero << endl;

      Racional* racional1 = new Racional(numerador1, denominador1);


      racional1->simplificarFraccion();
      racional1->ImprimirFracciones();

    //  cout << "El entero: "<< entero;
      Racional* respuesta;
      respuesta = *racional1 + entero;
      respuesta->simplificarFraccion();

      cout << endl;
      cout << "Respuesta: " << endl;

      respuesta->ImprimirFracciones();

      cout << endl;



    }
    if(opcion==2){
      int numerador1=0, numerador2=0, denominador1=0, denominador2=0;
      cout << "Ingrese el numerador para el primer Racional: ";
      cin>>numerador1;
      cout << endl;
      cout << "Ingrese el denominador para el primer Racional: ";
      cin>>denominador1;
      cout << endl;

      cout << "Ingrese el numerador para el segundo Racional: ";
      cin>>numerador2;
      cout << endl;
      cout << "Ingrese el denominador para el segundo Racional: ";
      cin>>denominador2;
      cout << endl;

      Racional* racional1 = new Racional(numerador1, denominador1);
      Racional* racional2 = new Racional(numerador2, denominador2);

      racional1->simplificarFraccion();
      racional2->simplificarFraccion();

      racional1->ImprimirFracciones();
      racional2->ImprimirFracciones();

      Racional* respuesta;
      respuesta = *racional1 + *racional2;

      respuesta->simplificarFraccion();

      cout << endl;
      cout << "Respuesta: " << endl;


      respuesta->ImprimirFracciones();

      cout << endl;

      //delete racional1; delete racional2; delete respuesta;



    }
    if(opcion==3){
      int numerador1=0, numerador2=0, denominador1=0, denominador2=0;
      cout << "Ingrese el numerador para el primer Racional: ";
      cin>>numerador1;
      cout << endl;
      cout << "Ingrese el denominador para el primer Racional: ";
      cin>>denominador1;
      cout << endl;

      cout << "Ingrese el numerador para el segundo Racional: ";
      cin>>numerador2;
      cout << endl;
      cout << "Ingrese el denominador para el segundo Racional: ";
      cin>>denominador2;
      cout << endl;

      Racional* racional1 = new Racional(numerador1, denominador1);
      Racional* racional2 = new Racional(numerador2, denominador2);

      racional1->simplificarFraccion();
      racional2->simplificarFraccion();

      racional1->ImprimirFracciones();
      racional2->ImprimirFracciones();

      Racional* respuesta;
      respuesta = *racional1 - *racional2;

      respuesta->simplificarFraccion();
      cout << endl;
      cout << "Respuesta: " << endl;

      respuesta->ImprimirFracciones();

      cout << endl;

    //  delete racional1; delete racional2; delete respuesta;

    }
    if(opcion==4){
      int numerador1=0, numerador2=0, denominador1=0, denominador2=0;
      cout << "Ingrese el numerador para el primer Racional: ";
      cin>>numerador1;
      cout << endl;
      cout << "Ingrese el denominador para el primer Racional: ";
      cin>>denominador1;
      cout << endl;

      cout << "Ingrese el numerador para el segundo Racional: ";
      cin>>numerador2;
      cout << endl;
      cout << "Ingrese el denominador para el segundo Racional: ";
      cin>>denominador2;
      cout << endl;

      Racional* racional1 = new Racional(numerador1, denominador1);
      Racional* racional2 = new Racional(numerador2, denominador2);

      racional1->simplificarFraccion();
      racional2->simplificarFraccion();

      racional1->ImprimirFracciones();
      racional2->ImprimirFracciones();

      Racional* respuesta;
      respuesta = (*racional1) * (*racional2);

      respuesta->simplificarFraccion();
      cout << endl;
      cout << "Respuesta: " << endl;

      respuesta->ImprimirFracciones();

      cout << endl;

    //  delete racional1; delete racional2; delete respuesta;

    }
    if(opcion==5){
      int numerador1=0, numerador2=0, denominador1=0, denominador2=0;
      cout << "Ingrese el numerador para el primer Racional: ";
      cin>>numerador1;
      cout << endl;
      cout << "Ingrese el denominador para el primer Racional: ";
      cin>>denominador1;
      cout << endl;

      cout << "Ingrese el numerador para el segundo Racional: ";
      cin>>numerador2;
      cout << endl;
      cout << "Ingrese el denominador para el segundo Racional: ";
      cin>>denominador2;
      cout << endl;

      Racional* racional1 = new Racional(numerador1, denominador1);
      Racional* racional2 = new Racional(numerador2, denominador2);

      racional1->simplificarFraccion();
      racional2->simplificarFraccion();

      racional1->ImprimirFracciones();
      racional2->ImprimirFracciones();

      Racional* respuesta;
      respuesta = (*racional1) / (*racional2);

      respuesta->simplificarFraccion();
      cout << endl;
      cout << "Respuesta: " << endl;

      respuesta->ImprimirFracciones();

      cout << endl;

    //  delete racional1; delete racional2; delete respuesta;

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
