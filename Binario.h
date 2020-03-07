#pragma once

#include <string>
using namespace std;

class Binario: public Numero
{

public:
	Binario();
	Binario(string);
	string getNumero();
	string toString();
	int entero();
	//Binario* operator +(int, int);
	/*virtual Numero* Suma(int, int);
	virtual Numero* Resta(int, int);
	virtual Numero* Mult(int, int);*/
	~Binario();	
};
