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

/*Numero* Numero::Suma(int num1, int num2){
	Numero* x;
	int suma=num1+num2;
	x = new Decimal(to_string(suma));
	return x;
}
Numero* Numero::Resta(int num1, int num2){
	Numero* x;
	int suma=num1+num2;
	x = new Decimal(to_string(suma));
	return x;
}
Numero* Numero::Mult(int num1, int num2){
	Numero* x;
	int suma=num1+num2;
	x = new Decimal(to_string(suma));
	return x;
}*/

Decimal::~Decimal(){
	cout<<"Decimal Eliminado"<<endl;
}