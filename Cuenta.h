#include <string>
#include <iostream>
using namespace std;
#pragma once
class Cuenta
{
private:
	//Atributos
	double tipoDeInteres;
	double saldo;
	string cuenta;
	string nombre;
	double estado;
public: //Metodos
	Cuenta(void); //Constructor
	Cuenta(string nom,string cue,double sal,double tipo);
	virtual ~Cuenta(void); //Destructor
	void set_Nombre(string nom);
	string get_Nombre();
	void set_Cuenta(string cue);
	string get_Cuenta();
	double get_TipoDeInteres();
	double Estado();
	void set_TipoDeInteres(double tipo);
	void reintegro(double cantidad);
	void ingreso(double cantidad);
};

