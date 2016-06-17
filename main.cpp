#include "robots.h"
#include "sirvientes.h"
#include "trabajadores.h"
#include "abastecedores.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::vector;



int main(int argc, char const *argv[]){
	vector <Robots*> robots;
	vector <Robots*> robots2;

	int opcion =1;
	double dinero =15000;
	double amperiosd =20000;
	while (opcion <6){
		cout << "1. Desea agregar un robot"<<endl;
		cout << "2. Desea Modificar un robot"<<endl;
		cout << "3. Desea eliminar un robot"<<endl;
		cout << "4. Desea usar un robot"<<endl;
		cout << "5. Desea comprar un robot"<<endl;
		cout<<  "6. Salir"<<endl;
		cin >> opcion;
		if(opcion==1){
			int opcion2=1;
			cout << "1. agregar un trabajador"<<endl;
			cout << "2. agregar un sirviente"<<endl;
			cout << "3. agregar un abastecedor"<<endl;
			cin >> opcion2;

			if(opcion2==1){
				string serie;
				string material;
				double amps;
				double precio;
				double salario=200;
				cout <<"1.Agregue un numero de serie"<<endl;
				cin>>serie;
				cout<<"2.agregar de que material esta hecho"<<endl;
				cin >> material;
				cout <<"3. agregar los amps"<<endl;
				cin >> amps;
				cout <<"4. agregar el precio"<<endl;
				cin >> precio;
				robots.push_back(new Trabajadores(serie, material, amps, precio, salario));
				cout << "se agrego exitosamente"<<endl;

			}

			if(opcion2==2){
				string serie;
				string material;
				double amps;
				double precio;
				double vida =0;
				cout <<"1.Agregue un numero de serie"<<endl;
				cin>>serie;
				cout<<"2.agregar de que material esta hecho"<<endl;
				cin >> material;
				cout <<"3. agregar los amps"<<endl;
				cin >> amps;
				cout <<"4. agregar el precio"<<endl;
				cin >> precio;
				robots.push_back(new Sirvientes(serie, material, amps, precio, vida));
				cout << "se agrego exitosamente"<<endl;

			}
			if(opcion2==3){

				string serie;
				string material;
				double amps;
				double precio;
				double gasta =100;
				cout <<"1.Agregue un numero de serie"<<endl;
				cin>>serie;
				cout<<"2.agregar de que material esta hecho"<<endl;
				cin >> material;
				cout <<"3. agregar los amps"<<endl;
				cin >> amps;
				cout <<"4. agregar el precio"<<endl;
				cin >> precio;
				robots.push_back(new Abastecedores(serie, material, amps, precio, gasta));
				cout << "se agrego exitosamente"<<endl;

			}




		}

		if (opcion==2){
			 for (int i=0; i<robots.size(); i++){
			 	cout << i<< ".) "<< robots[i]->toString()<<endl;

			 }
		}

		if(opcion==3){
			
			for (int i=0; i<robots.size(); i++){
			 	cout << i<< ".) "<< robots[i]->toString()<<endl;

			 }
			 double op ;
			 cout<<"ingrese la posicion a eliminar "<<endl;
			 cin >> op;
			 robots.erase(robots.begin() + op);



		}

		if(opcion==4){
			for (int i=0; i<robots2.size(); i++){
			 	cout << i<< ".) "<< robots2[i]->toString()<<endl;

			 }
			 double op ;
			 cout<<"ingrese la posicion a el robot que va usar "<<endl;
			 cin >> op;


		}

		if(opcion==5){
			for (int i=0; i<robots.size(); i++){
			 	cout << i<< ".) "<< robots[i]->toString()<<endl;

			 }
			 double op ;
			 cout<<"ingrese la posicion a comprar "<<endl;
			 cin >> op;
			 robots2.push_back(robots.at(op) );
			 robots.erase(robots.begin() + op);
		}



	}
	
	return 0;
}