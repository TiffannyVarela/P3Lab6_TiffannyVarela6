#include "Numero.h"
#include "Hexadecimal.h"
#include <string>
#include <iostream>
using namespace std;

Hexadecimal::Hexadecimal():Numero(){
}

Hexadecimal::Hexadecimal(string num):Numero(num){
	this->num=num;
}

string Hexadecimal::toString(){
	return num;
}

string Hexadecimal::getNumero(){
	string numero;
	numero=num;
	return numero;
}

int Hexadecimal::entero(){
	int retorno;
	string numero=getNumero();
	
	retorno = stoi(numero,nullptr,16);
	return retorno;
}

Hexadecimal::~Hexadecimal(){
	cout<<"Hexadecimal Eliminado"<<endl;
}