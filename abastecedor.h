#pragma once
#include <string> 
#include <iostream> 
#include "robot.h" 
using namespace std; 
class Abastecedor : public Robot{
	int oxido;
	public:
		Abastecedor(string, string, double, double);
		bool funcionar(double&, double&, int);
		// string toString()const;
};