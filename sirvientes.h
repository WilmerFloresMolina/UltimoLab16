#pragma once
#include "robots.h"
#include <string>
using std::string;
 
class Sirvientes : public Robots{
    double vida;
  public:
    Sirvientes(string, string,double,double,double=0.0);
    Sirvientes(const Sirvientes&);
    virtual ~Sirvientes();
    virtual string toString()const;
    double a()const;
    void setOxido(double);
    double getOxido();
    void setPrecio(double);
    double getPrecio();
    void setAmps(double);
	double getAmps();

};