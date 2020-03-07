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
	string nuevo=numero.substr(2,numero.size()-2);
	retorno = stoi(nuevo,nullptr,16);
	return retorno;
}

/*Numero* Numero::Suma(int num1, int num2){
	Numero* x;
	int suma=num1+num2;
	int r;
    string resp="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		
        while(suma>0)
        {
            r = suma % 16;
            resp = hex[r] + resp;
            suma = suma/16;
        }

    x = new Hexadecimal(resp);
	return x;
}
Numero* Numero::Resta(int num1, int num2){
	Numero* x;
	int suma=num1-num2;
	int r;
    string resp="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		
        while(suma>0)
        {
            r = suma % 16;
            resp = hex[r] + resp;
            suma = suma/16;
        }

    x = new Hexadecimal(resp);
	return x;
}
Numero* Numero::Mult(int num1, int num2){
	Numero* x;
	int suma=num1*num2;
	int r;
    string resp="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		
        while(suma>0)
        {
            r = suma % 16;
            resp = hex[r] + resp;
            suma = suma/16;
        }

    x = new Hexadecimal(resp);
	return x;
}*/

Hexadecimal::~Hexadecimal(){
	cout<<"Hexadecimal Eliminado"<<endl;
}