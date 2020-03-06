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
	~Numero();
	
};