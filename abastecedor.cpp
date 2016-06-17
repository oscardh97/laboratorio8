#include "robot.h"
#include "abastecedor.h"
#include <sstream>
#include <string> 
#include <iostream> 
using namespace std; 

Abastecedor::Abastecedor(string serie, string material, double amperios, double precio):Robot(serie, material, amperios, precio){
}

bool Abastecedor::funcionar(double& dinero, double& amperios, int size) {
	double cantAPagar = size * 100; 
	if (cantAPagar < dinero) {
		dinero -= cantAPagar;
		return true;
	}
	return false;
}

// string Trabajador::toString() {
// 	sstream;
// }
	