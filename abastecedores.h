#pragma once
#include "robots.h"
#include <string>
using std::string;
 //Los robots abastecedores gastan $100 x la cantidad de robots totales que tenga el usuario, 
class Abastecedores : public Robots{
    double gasta;
  public:
    Abastecedores(string, string,double,double,double=0.0);
    Abastecedores(const Abastecedores&);
    virtual ~Abastecedores();
    virtual string toString()const;
    double a()const;
    void setGasta(double);
    double getGasta();
    void setPrecio(double);
    double getPrecio();
    void setAmps(double);
	double getAmps();

};