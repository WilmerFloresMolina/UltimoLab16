robot:	robots.o sirvientes.o trabajadores.o abastecedores.o main.o 
	g++ robots.o sirvientes.o trabajadores.o abastecedores.o main.o -o tropa

main.o: main.cpp sirvientes.h robots.h abastecedores.h
	g++ -c main.cpp

sirvientes.o:	sirvientes.cpp sirvientes.h robots.h
	g++ -c sirvientes.cpp

trabajadores.o:	trabajadores.cpp trabajadores.h robots.h
	g++ -c trabajadores.cpp


abastecedores.o: abastecedores.cpp abastecedores.h robots.h
	g++ -c abastecedores.cpp

robots.o:	robots.cpp robots.h
	g++ -c robots.cpp