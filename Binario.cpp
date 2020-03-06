#include "Numero.h"
#include "Binario.h"
#include <string>
#include <iostream>
using namespace std;

Binario::Binario():Numero(){}

Binario::Binario():Numero(string num){
	this->num=num;
}

string Binario::toString(){
	return num;
}