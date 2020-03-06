#include "Numero.h"
#include "Decimal.h"
#include <string>
#include <iostream>
using namespace std;

Decimal::Decimal():Numero(){
}

Decimal::Decimal(string num):Numero(num){
	this->num=num;
}

string Decimal::toString(){
	return num;
}

Decimal::~Decimal(){
	cout<<"Decimal Eliminado"<<endl;
}