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

string Decimal::getNumero(){
	string numero;
	numero=num;
	return numero;
}

int Decimal::entero(){
	int retorno;
	string numero=getNumero();
	retorno = stoi(numero,nullptr,10);
	return retorno;
}

Decimal::~Decimal(){
	cout<<"Decimal Eliminado"<<endl;
}