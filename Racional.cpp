#include <iostream>
#include "Racional.h"

using namespace std;

Racional::Racional(){
  numerador=0;
  denominador=0;
}

Racional::Racional(int numerador, int denominador){
  this->numerador=numerador;
  this->denominador=denominador;
}

Racional::~Racional(){
  cout << "Destructor Racional" << endl;
}

Racional simplificarFraccion(Racional* racional){
  int num=0, int den=0;
  num=racional->getNumerador();
  den=racional->getDenominador();
  int divisor=0, int dividendo=0;
  



}


int getNumerador(){
  return numerador;
}
int getDenominador();{
  return denominador;
}
void setNumerador(int numerador){
  this->numerador=numerador;
}
void setDenominador(int denominador){
  this->denominador=denominador;
}

Racional Racional::operator+(Racional& der){

}

Racional Racional::operator-(Racional*){

}
Racional Racional::operator*(Racional*){

}
Racional Racional::operator-(Racional*){

}
Racional Racional::operator+(int){

}

void ImprimirFracciones(){
  cout << "El Racional es: " << numerador << "/" << denominador << endl;
}
