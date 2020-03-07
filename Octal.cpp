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

Octal::~Octal(){
	cout<<"Octal Eliminado"<<endl;
}