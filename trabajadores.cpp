#include "robots.h"
#include "trabajadores.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
 
Trabajadores::Trabajadores(string serie,string material,double amps,double precio, double salario)
:Robots(serie,material,amps,precio ), salario(salario){

}
Trabajadores::Trabajadores(const Trabajadores& s):Robots(s), salario(s.salario){

}
Trabajadores::~Trabajadores(){

}

string Trabajadores::toString()const{
    stringstream ss;
    ss << Robots::toString() << " Trabajador: "<<"" ;
    return ss.str();
}

double Trabajadores::a()const{
	double ampsj =amps *0.10;
	return ampsj;
}

void Trabajadores::setSalario(double a){
	salario = a;
}

double Trabajadores::getSalario(){
	return salario;
}

void Trabajadores::setPrecio(double a){
	precio = a;
}

double Trabajadores::getPrecio(){
	return precio;
}

void Trabajadores::setAmps(double a){
	amps = a;
}

double Trabajadores::getAmps(){
	return amps;
}

