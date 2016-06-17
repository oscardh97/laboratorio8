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
		void setNoSerie(string);
		void setMaterial(string);
		void setAmperios(double);
		void setPrecio(double);
		virtual bool funcionar();
		virtual string toString()const;
};