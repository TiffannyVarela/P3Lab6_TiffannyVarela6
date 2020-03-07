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
int menuOperaciones();
void printVector();

string tipo(int);

int main(int argc, char const *argv[])//inicio del main
{
	int opc=0, resp=-4;
	string num;
	int pos1,pos2;
	int num1, num2;

	do{//inicio del do while

		switch(opc=menu()){//inicio switch

			case 1://inicio case 1
				cout<<"Ingrese el numero: ";
				cin>>num;
				Validacion(num);
			break;//fin case 1

			case 2://inicio case 2
				printVector();
			break;//fin case 2

			case 3://inicio case 3
				if (numeros.size()>=2)
				{
					printVector();
					cout<<"\nIngrese la posicion del primer numero: ";
					cin>>pos1;
					cout<<"\nIngrese la posicion del segundo numero: ";
					cin>>pos2;
					while(pos1<0 || pos1>numeros.size()-1 || pos2<0 || pos2>numeros.size()-1 ){
						cout<<"\nINGRESE POSICIONES VALIDAS\n"<<endl;
						printVector();
						cout<<"\nIngrese la posicion del primer numero: ";
						cin>>pos1;
						cout<<"\nIngrese la posicion del segundo numero: ";
						cin>>pos2;
					}
					/*if (tipo(pos1=="Binario"))
					{
						num1=numeros[pos1]
					}*/
					
				}
				else{
					cout<<"No hay suficientes datos"<<endl;
				}
			break;//fin case 3

		}//fin switch

		cout<<"Desea volver?\n1.Si\n2.No\n:";
		cin>>resp;

	}while(resp!=2);//fin del do while

	for (int i = 0; i < numeros.size(); i++)
    {
        delete numeros[i];
        numeros[i] = NULL;
    }
    numeros.clear();
    delete numero;
    cout<<"Fin del programa"<<endl;
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

int menuOperaciones(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
        <<"1.- Suma"<<endl
        <<"2.- Resta"<<endl
		<<"3.- Multiplicacion"<<endl;
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
	//cout<<"tam "<<num.size()<<endl;
	//cout<<"Pos "<<foundoc<<endl;

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
			//cout<<"Protected "<<bin->getNumero()<<endl;
			//cout<<"Decimal "<<bin->entero()<<endl;
			//cout << bin->toString() <<endl;
			//cout << numeros[numeros.size()-1]->toString() <<endl;
			
		}
		else{
			cout<<"El numero no es binario"<<endl;
		}
	}
	
	if (foundhex==0)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i] !='8' && num[i]!='9' && num[i]!='A' && num[i] !='B' && num[i]!='C' && num[i]!='D' && num[i] !='E' && num[i]!='F'&& num[i]!='a' && num[i] !='b' && num[i]!='c' && num[i]!='d' && num[i] !='e' && num[i]!='f' && num[i] !='X' && num[i]!='x'){
				resp=2;
			}
		}
		if(resp==-1){
			Hexadecimal* hex;
			hex = new Hexadecimal(num);
			numeros.push_back(hex);
		}
		else{
			cout<<"El numero no es hexadecimal"<<endl;
		}
	}

	if (foundoc==0)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i]!='C' && num[i]!='c'){
				resp=2;
			}
		}
		if(resp==-1){
			Octal* oct;
			oct = new Octal(num);
			numeros.push_back(oct);
		}
		else{
			cout<<"El numero no es hexadecimal"<<endl;
		}
	}


	else{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i]!='8' && num[i]!='9'){
				resp=2;
			}
		}
		if(resp==-1){
			Decimal* dec;
			dec = new Decimal(num);
			numeros.push_back(dec);
		}
		else{
			//cout<<"El numero no es decimal"<<endl;
		}
	}
}

void printVector(){
	if (!numeros.empty())
	{
		for (int i = 0; i < numeros.size(); ++i)
		{				
			cout<<"\nPosicion "<<i<<": "<<numeros[i]->toString()<<endl;
		}
	}
	else{
		cout<<"El vector esta vacio"<<endl;
	}
}

string tipo (int pos){
	numero=numeros[pos];
	string num=numero->toString();
	string tip;
	int resp=-1;
	size_t foundbi = num.find("b");
	size_t foundhex = num.find("0x");
	size_t foundoc = num.find("0c");

	if (foundbi==num.size()-1)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='b'){
				resp=2;
			}
		}
		if(resp==-1){
			tip="Binario";
			
		}
	}
	
	if (foundhex==0)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i] !='8' && num[i]!='9' && num[i]!='A' && num[i] !='B' && num[i]!='C' && num[i]!='D' && num[i] !='E' && num[i]!='F'&& num[i]!='a' && num[i] !='b' && num[i]!='c' && num[i]!='d' && num[i] !='e' && num[i]!='f' && num[i] !='X' && num[i]!='x'){
				resp=2;
			}
		}
		if(resp==-1){
			tip="Hexadecimal";
			
		}
	}

	if (foundoc==0)
	{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i]!='C' && num[i]!='c'){
				resp=2;
			}
		}
		if(resp==-1){
			tip="Octal";
			
		}
	}


	else{
		for (int i = 0; i < num.size(); ++i)
		{
			if(num[i]!='0' && num[i]!='1' && num[i] !='2' && num[i]!='3' && num[i]!='4' && num[i] !='5' && num[i]!='6' && num[i]!='7' && num[i]!='8' && num[i]!='9'){
				resp=2;
			}
		}
		if(resp==-1){
			tip="Decimal";
			
		}
	}
	return tip;

}