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

Hexadecimal::~Hexadecimal(){
	cout<<"Hexadecimal Eliminado"<<endl;
}