#pragma once
#include <iostream>
#include <string>

using namespace std;

class Racional{
  private:
    int numerador;
    int denominador;


  public:
    Racional();
    Racional(int,int);
    ~Racional();
    int getNumerador();
    int getDenominador();
    void setNumerador(int);
    void setDenominador(int);
    Racional* operator+(Racional&);
    Racional* operator-(Racional&);
    Racional* operator*(Racional&);
    Racional* operator/(Racional&);
    Racional* operator+(int);

    void simplificarFraccion();
    void ImprimirFracciones();















};
