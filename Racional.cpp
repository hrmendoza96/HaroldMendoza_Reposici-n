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

Racional* Racional::operator+(Racional& der){
  if(this->getDenominador()==der.getDenominador()){

    Racional* respuesta;

    respuesta.setNumerador(this->getNumerador() + der.getNumerador());
    respuesta.setDenominador(this->getDenominador() + der.getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

    der.setNumerador(this->getDenominador()*der.getNumerador());
    der.setDenominador(this->getDenominador()*der.getDenominador());

    this->setNumerador(this->getNumerador()*auxDen);
    der.setDenominador(this->getNumerador()*auxDen);

    //Sumar
    Racional* respuesta;

    respuesta.setNumerador(this->getNumerador() + der.getNumerador());
    respuesta.setDenominador(this->getDenominador() + der.getDenominador());

    return respuesta;


  }

}

Racional* Racional::operator-(Racional*){
  if(this->getDenominador()==der.getDenominador()){

    Racional* respuesta;

    respuesta.setNumerador(this->getNumerador() - der.getNumerador());
    respuesta.setDenominador(this->getDenominador() - der.getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

    der.setNumerador(this->getDenominador()*der.getNumerador());
    der.setDenominador(this->getDenominador()*der.getDenominador());

    this->setNumerador(this->getNumerador()*auxDen);
    der.setDenominador(this->getNumerador()*auxDen);

    //Sumar
    Racional* respuesta;

    respuesta.setNumerador(this->getNumerador() - der.getNumerador());
    respuesta.setDenominador(this->getDenominador() - der.getDenominador());

    return respuesta;


  }

}
Racional* Racional::operator*(Racional*){
  Racional* respuesta;

  respuesta.setNumerador(this->getNumerador() * der.getNumerador());
  respuesta.setDenominador(this->getDenominador() * der.getDenominador());

  return respuesta;

}
Racional* Racional::operator/(Racional*){
  Racional* respuesta;

  respuesta.setNumerador(this->getNumerador() * der.getDenominador());
  respuesta.setDenominador(this->getDenominador() * der.getNumerador());

  return respuesta;

}


Racional* Racional::operator+(int){
  Racional* nuevo;
  nuevo.setNumerador()

}

void ImprimirFracciones(){
  cout << "El Racional es: " << numerador << "/" << denominador << endl;
}
