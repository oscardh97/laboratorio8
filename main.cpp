#include "robot.h"
#include "trabajador.h"
#include "sirviente.h"
#include "abastecedor.h"
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[]){
	vector <Robot*> todosRobots;
	vector <Robot*> robotComprados;
	double dineroGlobal = 15000, amperiosGlobal = 20000;
	while(true){
		int opcion;
		cout << "1. Agregar Robots" << endl;
		cout << "2. Modificar Robots" << endl;
		cout << "3. Eliminar Robots" << endl;
		cout << "4. Comprar Robots (usuario)" << endl;
		cout << "5. Usar función Robots (usuario)" << endl;
		cout << "6. Botar Robots(usuario)" << endl;
		cout << "7. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		if (opcion == 1) {
			int tipoRobot;
			cout << "Ingrese el tipo de robot: ";
			cin >> tipoRobot;
			string noSerie;
			cout << "Numero Serie: ";
			cin >> noSerie;
			string material;
			cout << "Material: ";
			cin >> material;
			double precio, amperios;
			cout << "precio";
			cin >> precio;
			cout << "amperios";
			cin >> amperios;
			if (tipoRobot == 1) {
				todosRobots.push_back(new Trabajador(noSerie, material, precio, amperios));
			} else if (tipoRobot == 2){
				todosRobots.push_back(new Sirviente(noSerie, material, precio, amperios));
			} else {
				todosRobots.push_back(new Abastecedor(noSerie, material, precio, amperios));
			}
		} else if (opcion == 2) {
			int indice4;
			cout << "Ingrese el indice: ";
			cin >> indice4;
			double precio2, amperios2;
			cout << "precio2";
			cin >> precio2;
			cout << "amperios";
			cin >> amperios2;
			todosRobots[indice4]->setAmperios(amperios2);
			todosRobots[indice4]->setPrecio(precio2);
		} else if (opcion == 3) {
			int indice3;
			cout << "Ingrese el indice: ";
			cin >> indice3;
  			todosRobots.erase (todosRobots.begin(), todosRobots.begin() + indice3);
		} else if (opcion == 4) {
			int indice;
			cout << "Ingrese el indice: ";
			cin >> indice;
			robotComprados.push_back(todosRobots[indice]);
  			todosRobots.erase (todosRobots.begin(), todosRobots.begin() + indice);
		} else if (opcion == 5) {
			int indice6;
			cout << "Ingrese el indice: ";
			cin >> indice6;
			int size = robotComprados.size();
			bool pudo = robotComprados[indice6]->funcionar(dineroGlobal, amperiosGlobal, size);
			//Aunque envie el ultimo parametro en duro no funciona
			// robotComprados[indice6]->funcionar(dineroGlobal, amperiosGlobal, 5);
		} else if (opcion == 6) {
			int indice2;
			cout << "Ingrese el indice: ";
			cin >> indice2;
  			robotComprados.erase (robotComprados.begin(), robotComprados.begin() + indice2);

		} else if (opcion == 6) {
			cout << "Adios";
			break;
		}
	}
	return 0;
}

void imprimirVector(vector <Robot*> vectorToPrint){
	for (int i = 0; i < vectorToPrint.size(); i++){
		vectorToPrint[i]->toString();
	}
}