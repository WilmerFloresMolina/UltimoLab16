#include "robots.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

 
Robots::Robots(string serie, string material, double amps,double precio):serie(serie), material(material),amps(amps),precio(precio){

	
}
Robots::Robots(const Robots& p):serie(p.serie), material(p.material),amps(p.amps),precio(p.precio){

}
Robots::~Robots(){

}
string Robots::toString()const{
    stringstream ss;
    ss << "Robots: " <<"Serie: " <<serie << " material: " <<  material<< " Amps: "<<amps<<"precio: "<<precio ;
    return ss.str();
}

double Robots::a()const{
	return -1;
}

