#include "Numero.h"
#include "Octal.h"
#include <string>
#include <iostream>
using namespace std;

Octal::Octal():Numero(){
}

Octal::Octal(string num):Numero(num){
	this->num=num;
}

string Octal::toString(){
	return num;
}

string Octal::getNumero(){
	string numero;
	numero=num;
	return numero;
}

int Octal::entero(){
	int retorno;
	string numero=getNumero();
	string nuevo=numero.substr(2,numero.size()-2);
	retorno = stoi(nuevo,nullptr,8);
	return retorno;
}

/*Numero* Octal::Suma(int num1, int num2){
	Numero* x;
	string resultado;
	int suma=num1+num2;
	int res, i=1, resp;
	while(suma!=0){
		res = suma%8;
		suma/=8;
		resp+=res*i;
		i*=10;
	}
	resultado="0c"+to_string(resp);
	x = new Octal(resultado);
	return x;
}
Numero* Octal::Resta(int num1, int num2){
	Numero* x;
	string resultado;
	int resta=num1-num2;
	int res, i=1, resp;
	while(resta!=0){
		res = resta%8;
		resta/=8;
		resp+=res*i;
		i*=10;
	}
	resultado="0c"+to_string(resp);
	x = new Octal(resultado);
	return x;
}
Numero* Octal::Mult(int num1, int num2){
	Numero* x;
	string resultado;
	int multiplicacion=num1*num2;
	int res, i=1, resp;
	while(multiplicacion!=0){
		res = multiplicacion%8;
		multiplicacion/=8;
		resp+=res*i;
		i*=10;
	}
	resultado="0c"+to_string(resp);
	x = new Octal(resultado);
	return x;
}*/

Octal::~Octal(){
	cout<<"Octal Eliminado"<<endl;
}