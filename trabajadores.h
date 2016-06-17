#pragma once
#include "robots.h"
#include <string>
using std::string;
 
class Trabajadores : public Robots{
    double salario;
  public:
    Trabajadores (string, string,double,double,double=0.0);
    Trabajadores (const Trabajadores &);
    virtual ~Trabajadores ();
    virtual string toString()const;
    double a()const;
    void setSalario(double);
    double getSalario();
    void setPrecio(double a);
    double getPrecio();
    void setAmps(double);
    double getAmps();

};