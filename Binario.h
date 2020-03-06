#pragma once

#include <string>
using namespace std;

class Binario: public Numero
{
public:
	Binario();
	Binario(string);
	virtual string toString();
	~Binario();	
};