#pragma once

#include <string>
#include "Numero.h"
using namespace std;

class Decimal: public Numero
{
public:
	Decimal();
	virtual string toString();
	~Decimal();	
};