#include "Numero.h"
#include "Hexadecimal.h"
#include <string>
#include <iostream>
using namespace std;

Hexadecimal::Hexadecimal():Numero(){}

Hexadecimal::Hexadecimal():Numero(string num){
	this->num=num;
}

string Hexadecimal::toString(){
	return num;
}