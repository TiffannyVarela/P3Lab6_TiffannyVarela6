#pragma once

#include <string>
using namespace std;

class Numero
{
protected:
	string num;
	Numero();
	Numero(string);
public:
	virtual string toString();
	virtual int entero();
	/*virtual Numero* Suma(int, int);
	virtual Numero* Resta(int, int);
	virtual Numero* Mult(int, int);*/
	~Numero();
	
};
