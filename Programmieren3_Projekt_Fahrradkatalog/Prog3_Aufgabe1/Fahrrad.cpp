#include "Fahrrad.h"
#include <iostream>

using namespace std;

Fahrrad::Fahrrad(string marke, string modell, int modellJahr, double preis)
{
	this->marke = marke;
	this->modell = modell;
	this->modellJahr = modellJahr;
	this->preis = preis;

	cout <<"Aenderungen uebernommen." << endl << endl;
}

void Fahrrad::nenneMarkeModell(void)
{
	cout << endl << "******New Entry*****" << endl;
	cout << "Marke:"<< marke << endl;
	cout << "Modell: " << modell << endl;
	cout << "*****End of Entry*****" << endl;
}

string Fahrrad::get_marke()
{
	return marke;
}

string Fahrrad::get_modell()
{
	return modell;
}

int Fahrrad::get_modellJahr()
{
	return modellJahr;
}

double Fahrrad::get_preis()
{
	return preis;
}
