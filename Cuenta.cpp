#include "StdAfx.h"
#include "Cuenta.h" //Declarar el Header de la Class


Cuenta::Cuenta(void)
{
	saldo=0;
	tipoDeInteres=0.0;
}
Cuenta::Cuenta(string nom,string cue,double sal, double tipo)
{
	set_Nombre(nom);
	set_Cuenta(cue);
	saldo=sal;
	tipoDeInteres=tipo;
}


Cuenta::~Cuenta(void)
{
}

	void Cuenta::set_Nombre(string nom)
	{
		if(nom.length()==0){
			cout<<"Error:cadena vacia"<<endl;
			return;}
		nombre=nom;
	}
	string Cuenta::get_Nombre()
	{
		return nombre;
	}
	void Cuenta::set_Cuenta(string cue)
	{
		cuenta=cue;
	}
	string Cuenta::get_Cuenta()
	{
		return cuenta;
	}
	double Cuenta::get_TipoDeInteres()
	{
		return tipoDeInteres;
	}
	double Cuenta::Estado()
	{
		return saldo;
	}
	void Cuenta::set_TipoDeInteres(double tipo)
	{
		tipoDeInteres=tipo;
	}
	void Cuenta::reintegro(double cantidad)
	{
		if(saldo-cantidad<0){
			cout<<"Error:no dispone de saldo"<<endl;
			return;
		}
		saldo=saldo-cantidad;
	}
	void Cuenta::ingreso(double cantidad)
	{
		if(cantidad<0){
			cout<<"Error:cantidad negativa"<<endl;
			return;
		}
		saldo=saldo+cantidad;
	}