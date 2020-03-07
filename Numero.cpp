#include "Numero.h"
#include <string>
#include <iostream>
using namespace std;

Numero::Numero(){}

Numero::Numero(string cnum){
	this->num=cnum;
}

string Numero::toString(){
	return num;
}

int Numero::entero(){
	return 0;
}

/*Numero* Numero::Suma(int num1, int num2){
	Numero* x;
	return x;
}
Numero* Numero::Resta(int num1, int num2){
	Numero* x;
	return x;
}
Numero* Numero::Mult(int num1, int num2){
	Numero* x;
	return x;
}
*/

Numero::~Numero(){
}