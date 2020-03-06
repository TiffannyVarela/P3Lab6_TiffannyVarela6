#include "Numero.h"
#include "Decimal.h"
#include <string>
#include <iostream>
using namespace std;

Decimal::Decimal():Numero(){}

Decimal::Decimal():Numero(string num){
	this->num=num;
}

string Decimal::toString(){
	return num;
}