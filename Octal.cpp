#include "Numero.h"
#include "Octal.h"
#include <string>
#include <iostream>
using namespace std;

Octal::Octal():Numero(){}

Octal::Octal():Numero(string num){
	this->num=num;
}

string Octal::toString(){
	return num;
}