#pragma once

#include <string>
#include "Numero.h"
using namespace std;

class Octal: public Numero
{
public:
	Octal();
	Octal(string);
	virtual string toString();
	~Octal();	
};