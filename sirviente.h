#pragma once
#include <string> 
#include <iostream> 
#include "robot.h" 
using namespace std; 
class Sirviente{
	int oxido;
	public:
		Sirviente(string, string, double, double);
		bool funcionar();
		string toString()const;
};