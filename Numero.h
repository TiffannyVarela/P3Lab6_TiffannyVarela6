#pragma once

#include <string>
using namespace std;

class Numero
{
protected:
	string num;
public:
	Numero();
	Numero(string);
	virtual string toString() = "";
	~Numero();
	
};