//Datei:					Programmieren_3_Projekt_Fahrradkatalog
//Klassenname:				Fahrrad
//Version:					0.1
//Copyright/Autor:			Gustav Hey 
//Letztes Aenderungsdatum:	22.10.2019

//Bemerkung: STandardkonstuktor l�sst sich nicht entfernen!

#include <iostream>
#include "Fahrrad.h"
#include <vector>


int main()
{
	vector <Fahrrad> verzeichnis;

	verzeichnis.push_back(Fahrrad("Diamant", "Elan", 2019, 669));
	verzeichnis.push_back(Fahrrad("Diamant", "Rubin Super Legere", 2019, 969));
	verzeichnis.push_back(Fahrrad("Diamant", "Ubari", 2019, 549));

	for (unsigned int i = 0; i < verzeichnis.size(); i++)
	{
		verzeichnis.at(i).nenneMarkeModell();					
	}
	
	
	return EXIT_SUCCESS;

}


//Aufgabe 1a): Bei privaten Daten wird der Zugriff auf entsprechende Elementfunktionen/Methoden limitiert. Dadurch k�nnen Abh�ngigkeiten kontrolliert werden. Es ist von au�erhalb der Klasse ist nur �ber entsprchende get-Methoden oder Freundfunktionen m�glich. 
//			   Gegens�tzlich dazu kann auf �ffentliche Daten von au�erhalb der Klasse zugegriffen werden.

//Aufgabe 1b): siehe 1a)

//Aufgabe 1c): Eine Methode ist eine Funktion, also ein wiederverwendbarer Teil eines Codes, welche das dynamishe Verhalten einer Funktion charakterisiert. Das statische Wesen einer Funktion dagegen wird durch Variablen und Konstanten beschrieben. 