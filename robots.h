#pragma once
#include <string>
using std::string;
 
class Robots{

    /*Cada robot tiene un número de serie, material del que está hecho cantidad de amperios que utilizan 
    y precio. El usuario final que usará el programa tiene $15,000 disponibles y */
    string serie;
    string material;
    
    
  public:
    double amps;
    double precio;
    Robots(string, string,double,double);
    Robots(const Robots&);
    virtual ~Robots();
    virtual double a()const;
    virtual string toString()const;

};