#include "Numero.h"
#include "Binario.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
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

/*Binario* Binario::operator +(int num1, int num2){
	int suma=num1+num2;
	int exp=0,digito;
	double resp=0;
	Binario* bin;

	while(suma/2!=0){
		digito=suma%2;
		resp=resp+suma*pow(10.0,exp);
		exp++;
		suma=suma/2;
	}
	bin = new Binario(to_string(resp));
	return bin;
}*/

/*Numero* Numero::Suma(int num1, int num2){
	Numero* x;
	int suma=num1+num2;
	string resultado;
	int exp=0,digito;
	double resp=0;
	while(suma/2!=0){
		digito=suma%2;
		resp=resp+suma*pow(10.0,exp);
		exp++;
		suma=suma/2;
	}
	resultado=to_string(resp)+"b";
	x = new Binario(resultado);
	return x;
}
Numero* Numero::Resta(int num1, int num2){
	Numero* x;
	int suma=num1-num2;
	int exp=0,digito;
	double resp=0;
	string resultado;
	while(suma/2!=0){
		digito=suma%2;
		resp=resp+suma*pow(10.0,exp);
		exp++;
		suma=suma/2;
	}
	resultado=to_string(resp)+"b";
	x = new Binario(resultado);
	return x;
}
Numero* Numero::Mult(int num1, int num2){
	Numero* x;
	int suma=num1*num2;
	string resultado;
	int exp=0,digito;
	double resp=0;
	while(suma/2!=0){
		digito=suma%2;
		resp=resp+suma*pow(10.0,exp);
		exp++;
		suma=suma/2;
	}
	resultado=to_string(resp)+"b";
	x = new Binario(resultado);
	return x;
}*/

Binario::~Binario(){
	cout<<"Binario Eliminado"<<endl;
}