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

Binario::~Binario(){
	cout<<"Binario Eliminado"<<endl;
}