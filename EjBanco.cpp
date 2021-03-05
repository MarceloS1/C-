// EjBanco.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "Cuenta.h"

using namespace std;

int main()
{
	Cuenta cuenta01;

	Cuenta cuenta02("Juanito","0987654321",6000,3.5);

	cuenta01.set_Nombre("Pepito");
	cuenta01.set_Cuenta("1234567890");
	cuenta01.set_TipoDeInteres(2.5);
	cuenta01.ingreso(12000);
	cuenta01.reintegro(3000);

	cout<<"Nombre: "<<cuenta01.get_Nombre()<<endl;
	cout<<"N.Cuenta: "<<cuenta01.get_Cuenta()<<endl;
	cout<<"Saldo: "<<cuenta01.Estado()<<endl;
	cout<<"Tipo de Interes: "<<cuenta01.get_TipoDeInteres()<<endl;

	cout<<"Nombre: "<<cuenta02.get_Nombre()<<endl;
	cout<<"Saldo: "<<cuenta02.Estado()<<endl;
	cout<<"N.Cuneta: "<<cuenta02.get_Cuenta()<<endl;
	cout<<"Interes: "<<cuenta02.get_TipoDeInteres()<<endl;
	
	getch();
	return 0;
	
}
