#pragma once

#include <string>
#include "Numero.h"
using namespace std;

class Hexadecimal: public Numero
{
public:
	Hexadecimal();
	virtual string toString();
	~Hexadecimal();	
};