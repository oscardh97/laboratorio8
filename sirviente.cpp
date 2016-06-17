#include "robot.h"
#include "sirviente.h"
#include <sstream>
#include <string> 
#include <iostream> 
using namespace std; 

Sirviente::Sirviente(string serie, string material, double amperios, double precio):Robot::(serie, material, amperios, precio){}

bool Sirviente::funcionar() {
	this->oxido += 5;
	if (this->oxido === 100)
		return false;
	return true;
}

// string Sirviente::toString() {
// 	sstream;
// }
	