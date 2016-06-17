#include "robots.h"
#include "sirvientes.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
 
Sirvientes::Sirvientes(string serie,string material,double amps,double precio, double vida)
:Robots(serie,material,amps,precio ), vida(vida){

}
Sirvientes::Sirvientes(const Sirvientes& s):Robots(s), vida(s.vida){

}
Sirvientes::~Sirvientes(){

}

string Sirvientes::toString()const{
    stringstream ss;
    ss << Robots::toString() << " Sirviente: "<<"oxido" << vida ;
    return ss.str();
}

double Sirvientes::a()const{
	double vida1 =vida +5;
	return vida1;
}

void Sirvientes::setOxido(double a){
	vida = a;
}

double Sirvientes::getOxido(){
	return vida;
}

void Sirvientes::setPrecio(double a){
	precio = a;
}

double Sirvientes::getPrecio(){
	return precio;
}

void Sirvientes::setAmps(double a){
	amps = a;
}

double Sirvientes::getAmps(){
	return amps;
}




/*
Los robots sirvientes inician con 0 oxido pero cada vez que su función se ejecuta, 
su oxido incrementa por 5 y una vez que se llega al 100, el robot se desmorona y 
la cantidad de amperios utilizados vuelve a el usuario como amperios disponibles. 

*/