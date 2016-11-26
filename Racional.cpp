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

//================Algoritmo de Euclides para simplificar el racional ===========
void Racional::simplificarFraccion(){
  int num1=0; int num2=0;
  num1=this->getNumerador();
  num2=this->getDenominador();
  while(num1!=num2){
		if(num1>num2)
		num1=num1-num2;
		else
	   num2=num2-num1;

	}
  int gcf = num1;
	//cout<<"El GCF es:  "<< gcf <<endl;

  this->setNumerador(this->getNumerador() / gcf );
  this->setDenominador(this->getDenominador() / gcf );


}
//==============getters and setters
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
    respuesta->setDenominador(this->getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

   //cout << "auxDen: "<< auxDen<< endl;

    der.setNumerador(this->getDenominador()*der.getNumerador());

   //cout << "Der Num: " << der.getNumerador()<< endl;
    der.setDenominador(this->getDenominador()*der.getDenominador());
  // cout << "Der Den: " << der.getDenominador()<<endl;

    this->setNumerador(this->getNumerador()*auxDen);
    cout << "this Num: " <<this->getNumerador() << endl;
    this->setDenominador(this->getDenominador()*auxDen);
  //  cout << "this Den: "<<  this->getDenominador() << endl;

    //Sumar
    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() + der.getNumerador());
    respuesta->setDenominador(this->getDenominador());

    return respuesta;


  }

}
//==================RESTA========================
Racional* Racional::operator-(Racional& der){
  if(this->getDenominador()==der.getDenominador()){

    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() - der.getNumerador());
    respuesta->setDenominador(this->getDenominador());

    return respuesta;

  }else{
    int auxDen = der.getDenominador(); //guarda el valor del denominador del elemento de la derecha para usarlo despues y no perderlo

    der.setNumerador(this->getDenominador()*der.getNumerador());
    der.setDenominador(this->getDenominador()*der.getDenominador());

    this->setNumerador(this->getNumerador()*auxDen);
    this->setDenominador(this->getNumerador()*auxDen);

    //Sumar
    Racional* respuesta;

    respuesta->setNumerador(this->getNumerador() - der.getNumerador());
    respuesta->setDenominador(this->getDenominador());

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
  int num1 = this->getNumerador();
  int num2 = der.getNumerador();
  int den1 = this->getDenominador();
  int den2 = der.getDenominador();

  respuesta->setNumerador((num1*den2));
  cout << "resp Num: " << respuesta->getNumerador() << endl;
  respuesta->setDenominador((num2*den1));
  //cout << "this den: "<< this->getDenominador(); cout << " der num: " << der.getNumerador() << endl;
  cout << "resp Den: " << respuesta->getDenominador() << endl;

  return respuesta;

}

//==================SUMA con Entero========================
Racional* Racional::operator+(int entero){
  Racional* nuevo;


  nuevo->setNumerador((entero*this->getDenominador()));
  nuevo->setDenominador((this->getDenominador()*1));

  cout << "den : "<< nuevo->getDenominador()<< endl;
  cout << "num: " << nuevo->getNumerador() << endl;
  Racional* respuesta;

  respuesta->setNumerador(this->getNumerador() + nuevo->getNumerador());
  respuesta->setDenominador(this->getDenominador());

}

void Racional::ImprimirFracciones(){
  cout << "El Racional es: " << this->numerador << "/" << this->denominador << endl;
}
