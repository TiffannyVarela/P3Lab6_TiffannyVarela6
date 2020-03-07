#include "Numero.h"
#include "Binario.h"
#include <string>
#include <iostream>
using namespace std;

Binario::Binario():Numero(){
}

Binario::Binario(string cnum):Numero(cnum){
	this->num=cnum;
}

string Binario::toString(){
	return this->num;
}

string Binario::getNumero(){
	string numero;
	numero=num;
	return numero;
}

int Binario::entero(){
	int retorno;
	string numero=getNumero();
	numero.pop_back();
	retorno = stoi(numero,nullptr,2);
	return retorno;
}

Binario::~Binario(){
	cout<<"Binario Eliminado"<<endl;
}