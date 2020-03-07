#pragma once

#include <string>
#include "Numero.h"
using namespace std;

class Octal: public Numero
{
public:
	Octal();
	Octal(string);
	string toString();
	string getNumero();
	int entero();
	/*Numero* Suma(int, int);
	Numero* Resta(int, int);
	Numero* Mult(int, int);*/
	~Octal();	
};