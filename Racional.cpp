#include <iostream>
#include <string>
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

Racional Racional::simplificarFraccion(Racional* racional){
  int num=0; int den=0;
  num=racional->getNumerador();
  den=racional->getDenominador();
  int divisor=0; int dividendo=0;
  




}
int Racional::getNumerador(){
  return numerador;
}
int Racional::getDenominador(){
  return denominador;
}
void Racional::setNumerador(int numerador){
  this->numerador=numerador;
}
void Racional::setDenominador(int denominador){
  this->denominador=denominador;
}

//==================SUMA========================
Racional* Racional::operator+(Racional& der){
  if(this->getDenominador()==der.getDenominador()){

    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() + der.getNumerador());
    respuesta->setDenominador(this->getDenominador() + der.getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

    der.setNumerador(this->getDenominador()*der.getNumerador());
    der.setDenominador(this->getDenominador()*der.getDenominador());

    this->setNumerador(this->getNumerador()*auxDen);
    der.setDenominador(this->getNumerador()*auxDen);

    //Sumar
    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() + der.getNumerador());
    respuesta->setDenominador(this->getDenominador() + der.getDenominador());

    return respuesta;


  }

}
//==================RESTA========================
Racional* Racional::operator-(Racional& der){
  if(this->getDenominador()==der.getDenominador()){

    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() - der.getNumerador());
    respuesta->setDenominador(this->getDenominador() - der.getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

    der.setNumerador(this->getDenominador()*der.getNumerador());
    der.setDenominador(this->getDenominador()*der.getDenominador());

    this->setNumerador(this->getNumerador()*auxDen);
    der.setDenominador(this->getNumerador()*auxDen);

    //Sumar
    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() - der.getNumerador());
    respuesta->setDenominador(this->getDenominador() - der.getDenominador());

    return respuesta;


  }

}
//==================MULT========================
Racional* Racional::operator*(Racional& der){
  Racional* respuesta;

  respuesta->setNumerador(this->getNumerador() * der.getNumerador());
  respuesta->setDenominador(this->getDenominador() * der.getDenominador());

  return respuesta;

}

//==================DIV========================
Racional* Racional::operator/(Racional& der){
  Racional* respuesta;

  respuesta->setNumerador(this->getNumerador() * der.getDenominador());
  respuesta->setDenominador(this->getDenominador() * der.getNumerador());

  return respuesta;

}

//==================SUMA con Entero========================
Racional* Racional::operator+(int entero){
  Racional* nuevo;
  nuevo->setNumerador(entero*this->getDenominador());
  nuevo->setDenominador(this->getDenominador());

  Racional* respuesta;

  respuesta->setNumerador(this->getNumerador() + nuevo->getNumerador());
  respuesta->setDenominador(this->getDenominador() + nuevo->getDenominador());

}

void ImprimirFracciones(Racional* racional){
  cout << "El Racional es: " << racional->getNumerador() << "/" << racional->getDenominador() << endl;
}
