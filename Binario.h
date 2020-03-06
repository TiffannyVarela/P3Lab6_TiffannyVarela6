#pragma once

#include <string>
using namespace std;

class Binario: public Numero
{
public:
	Binario();
	virtual string toString();
	~Binario();	
};