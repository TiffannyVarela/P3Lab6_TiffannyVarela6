#pragma once

#include <string>
#include "Numero.h"
using namespace std;

class Decimal: public Numero
{
public:
	Decimal();
	Decimal(string);
	string toString();
	string getNumero();
	int entero();
	/*Numero* Suma(int, int);
	Numero* Resta(int, int);
	Numero* Mult(int, int);*/
	~Decimal();	
};

