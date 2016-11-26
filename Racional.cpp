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
