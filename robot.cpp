#include "robot.h"
#include <sstream>
#include <string> 
#include <iostream> 
using namespace std; 

Robot::Robot(){}
Robot::Robot(string serie, string material, double amperios, double precio):serie(serie), material(material), amperios(amperios), precio(precio){}

void Robot::setNoSerie(string newSerie) {
	this->serie = newSerie;
}

void Robot::setMaterial(string newMaterial) {
	this->material = newMaterial;
}

void Robot::setAmperios(double newAmperios) {
	this->amperios = newAmperios;
}

void Robot::setPrecio(double newPrecio) {
	this->precio = newPrecio;
}


string Robot::toString(){
	stringstream ss;
	ss << " Amperios: " << this->amperios << ", precio" << this->precio << ", material" << this->material << ", No Serie" << this->serie;
	return ss.str();
}
bool Robot::funcionar(double& precio, double& amperios, int size){
	return 0;
}