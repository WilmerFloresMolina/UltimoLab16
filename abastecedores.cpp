#include "robots.h"
#include "abastecedores.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
 
Abastecedores::Abastecedores (string serie,string material,double amps,double precio, double gasta)
:Robots(serie,material,amps,precio ), gasta(gasta){

}
Abastecedores::Abastecedores(const Abastecedores& s):Robots(s), gasta(s.gasta){

}
Abastecedores::~Abastecedores (){

}

string Abastecedores::toString()const{
    stringstream ss;
    ss << Robots::toString() << " Abastecedores: "<<"gasta 100" ;
    return ss.str();
}

double Abastecedores::a()const{
	
	return 1;
}
void Abastecedores::setGasta(double a){
	gasta = a;
}

double Abastecedores::getGasta(){
	return gasta;
}

void Abastecedores::setPrecio(double a){
	precio = a;
}

double Abastecedores::getPrecio(){
	return precio;
}

void Abastecedores::setAmps(double a){
	amps = a;
}

double Abastecedores::getAmps(){
	return amps;
}