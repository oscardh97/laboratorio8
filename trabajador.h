#pragma once
#include <string> 
#include <iostream> 
#include "robot.h"
using namespace std; 
class Trabajador : public Robot {
	int oxido;
	public:
		Trabajador(string, string, double, double);
		bool funcionar(double&, double&, int);
		// string toString()const;
};