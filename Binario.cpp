#include "Numero.h"
#include "Binario.h"
#include <string>
#include <iostream>
using namespace std;

Binario::Binario():Numero(num){
	this->num=num;
}

string Binario::toString(){
	return num;
}