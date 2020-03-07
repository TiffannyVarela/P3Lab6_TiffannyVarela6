#include "Numero.h"
#include <string>
#include <iostream>
using namespace std;

Numero::Numero(){}

Numero::Numero(string cnum){
	this->num=cnum;
}

string Numero::toString(){
	return " ";
}

int Numero::entero(){
	return 0;
}

Numero::~Numero(){
}