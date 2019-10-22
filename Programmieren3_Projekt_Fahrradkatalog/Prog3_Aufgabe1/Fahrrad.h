#pragma once
#include <string>
#include <iostream>

using namespace std;

class Fahrrad
{
public:
	
	//Konstruktor + Destruktor//
	Fahrrad(string marke, string modell, int modellJahr, double preis);
	~Fahrrad() {};

	//Methoden//
	void nenneMarkeModell(void);
	string get_marke();
	string get_modell();
	int get_modellJahr();
	double get_preis();

private:
	//Attribute//
	string marke;
	string modell;
	int modellJahr;
	double preis;


};

