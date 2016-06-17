#include "robot.h"
#include "trabajador.h"
#include <sstream>
#include <string> 
#include <iostream> 
using namespace std; 

Trabajador::Trabajador(string serie, string material, double amperios, double precio):Robot(serie, material, amperios, precio){
}

bool Trabajador::funcionar(double& dinero, double& amperios, int size) {
	double amperiosGastados = amperios * 0.1; 
	if (dinero < 200 && amperiosGastados < amperios) {
		dinero -= 200;
		amperios -= amperiosGastados;
		return true;
	}
	return false;
}

// string Trabajador::toString() {
// 	sstream;
// }
	