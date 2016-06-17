main: main.o robot.o trabajador.o sirviente.o abastecedor.o
	g++ main.o robot.o trabajador.o sirviente.o abastecedor.o -o lab8 
	
main.o:	main.cpp robot.h trabajador.h sirviente.h abastecedor.h
	g++ -c main.cpp 

robot.o:	robot.cpp robot.h
	g++ -c robot.cpp 

sirviente.o:	sirviente.cpp sirviente.h robot.h		
	g++ -c sirviente.cpp

trabajador.o:	trabajador.cpp trabajador.h robot.h		
	g++ -c trabajador.cpp

abastecedor.o:	abastecedor.cpp abastecedor.h robot.h		
	g++ -c abastecedor.cpp
