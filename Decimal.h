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
	~Decimal();	
};

