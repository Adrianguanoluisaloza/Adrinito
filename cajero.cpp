//programa: cajero automatico
//autor: Adrian Guanoluisa
//fecha: 12-10-2023
//archivo: cajero automatico

#include<iostream>
using namespace std;
int main()
{
	int c1, c2, c3, c01=22,c02=50, c03=30;
	float valor,saldodisponible=10000;
	cout<<"ingrese c1 c2 c3:";cin>>c1>>c2>>c3;
	if(c1==c01){
		if(c2==c02){
			if(c3==c02){
				cout<<"ingrese el valor a retirar:";cin>>valor;
			saldodisponible=saldodisponible-valor;
			}else{
				cout<<"contraseña c3 invalida"<<endl;
			}
		}else{
			cout<<"contraseña c2 incorrecta"<<endl;
		}
	}else{
		cout<<"contraseña c1 incorrecto"<<endl;
	}

	return 0;
}
