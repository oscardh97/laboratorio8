#pragma once
#include <string> 
#include <iostream> 
using namespace std; 
class Robot{
	string serie, material;
	protected:
		double amperios, precio;
	public:
		Robot(string, string, double, double);
		Robot();
		// void setNoSerie(string);
		// void setMaterial(string);
		// void setAmperios(double);
		// void setPrecio(double);
		// virtual bool funcionar();
		virtual bool funcionar(double&, double&, int);
		virtual string toString()const;
		// virtual bool funcionar(int, double&);
		// virtual string toString()const;
};