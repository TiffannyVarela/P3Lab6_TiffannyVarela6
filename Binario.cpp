#include "Numero.h"
#include "Binario.h"
#include <string>
#include <iostream>
using namespace std;

Binario::Binario():Numero(){
}

Binario::Binario(string num):Numero(num){
	//this->num=num;
}

string Binario::toString(){
	return num;
}

Binario::~Binario(){
	cout<<"Binario Eliminado"<<endl;
}