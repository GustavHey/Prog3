#include "beispielklasse.h"
#include <iostream>


beispielklasse::beispielklasse()
{
}

beispielklasse::beispielklasse(int eingang1, double eingang2)
{
	wert1 = 2 * eingang1;
	wert2 = 2 * eingang2;
}

int ausgabe1()
{
	return wert1;				//get methode für wert 1
}

double ausgabe2()				//get methode für wert 2
{
	return wert2;
}

double konsole()				//Methode zur Konsolenausgabe
{
	cout << %i << wert1 << endl;
	cout << %d << wert2 << endl;
}



beispielklasse::~beispielklasse()
{
}
