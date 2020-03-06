#include <iostream>
#include <string>
#include <vector>
#include "Numero.h"
#include "Binario.h"
#include "Octal.h"
#include "Decimal.h"
#include "Hexadecimal.h"

using namespace std;

int menu();//metodo menu
void Validacion(string);
	Numero* numero;
	vector<Numero*> numeros = vector<Numero*>();

int main(int argc, char const *argv[])//inicio del main
{
	int opc=0, resp=-4;
	string num;

	do{//inicio del do while

		switch(opc=menu()){//inicio switch

			case 1://inicio case 1
				cout<<"Ingrese el numero: ";
				cin>>num;
				Validacion(num);
				//numero = new Numero(num);
				//numeros.push_back(numero);
			break;//fin case 1

			case 2://inicio case 2
				if (!numeros.empty())
				{
					for (int i = 0; i < numeros.size(); ++i)
					{
						if(numero[i]  Binario)
							cout<<"Posicion "<<": ";
						//cout<<numeros[i]->toString()<<endl;
					}
				}
				else{
					cout<<"El vector esta vacio"<<endl;
				}
			break;//fin case 2

			case 3://inicio case 3
			break;//fin case 3

		}//fin switch

		cout<<"Desea volver?\n1.Si\n2.No\n:";
		cin>>resp;

	}while(resp!=2);//fin del do while

	return 0;
}//fin del main

int menu(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
        <<"1.- Ingresar Numero"<<endl
        <<"2.- Listar Numeros"<<endl
		<<"3.- Operacion"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 3){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 3"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

void Validacion(string num){
	int resp=-1;
	size_t foundbi = num.find("b");
	size_t foundhex = num.find("0x");
	size_t foundoc = num.find("0c");
	//vector<char> v;
	cout<<"tam "<<num.size()<<endl;
	cout<<"Pos "<<foundhex<<endl;

	if (foundbi==num.size()-1)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='b'){
				resp=2;
			}
		}
		if(resp==-1){
			Binario* bin;
			bin = new Binario(num);
			numeros.push_back(bin);
			delete bin;
		}
		else{
			cout<<"El numero no es binario"<<endl;
		}
	}
	if (num.find("0x"))
	{
		Hexadecimal* hex;
		hex = new Hexadecimal(num);
		numeros.push_back(hex);
		delete hex;
	}
	if (num.find("0c"))
	{
		Octal* oct;
		oct = new Octal(num);
		numeros.push_back(oct);
		delete oct;
	}
	else{
		Decimal* dec;
		dec = new Decimal(num);
		numeros.push_back(dec);
		delete dec;
	}
}