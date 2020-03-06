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

Octal::~Octal(){
	cout<<"Octal Eliminado"<<endl;
}