// Datei:Prog3_Aufg1_Vorübung
// Klassenname: 
// Version: 0.1
// Erstelldatum: 18.10.19
// Autor: Gustav Hey 
#include <iostream>
#include <vector>
#include "klasse1.h"
#include <fstream>
#include <string>

using namespace std;


void aufgabe1();
void aufgabe2();
void aufgabe3();
void aufgabe4();
void aufgabe5();
void aufgabe6();

int main()
{
	
	aufgabe1();
	aufgabe2();
	aufgabe3();
	aufgabe4();
	aufgabe5();
	aufgabe6();
	
	return EXIT_SUCCESS;
}



void aufgabe1(void)
{
	cout << "-----------------" << endl << "Aufgabe 1" << endl;

	int c_array[10];
	for (int i = 0; i < 10; i++)
	{
		c_array[i] = (i + 1);
		cout << c_array[i] << endl;
	}

	// 1a): Bei einem Feld mit 10 Elementen sind die Indizes 0-9 erlaubt, da daer Index als Offset von der ersten Speicheradresse des Arrays zu betrachten ist
	// 1b): Bei Zugriff auf einen Index außerhalb des deklarierten Speichers kommt es bestenfalls zu einem Speicherzugriffsfehler. Hierbei verhindert das OS ein Schreiben außerhalb des vorgesehenen SPeicherbereichs. Schlimmstenfalls wird dieser nicht ausgelöst und es wird ein Speicherbereich eines anderen Programms überschrieben. 
	// 1c): Nein, da die Größe eines Arrays bei der Daklaration festgelegt werden muss. Für ein Array dynamischer Größe existiert das Konzept des vectors. 
}


	void aufgabe2(void)
	{
		cout << "-----------------" << endl << "Aufgabe 2" << endl;

		double *c_array2[10];
		for (int i = 0; i <= 9; i++)
		{
			c_array2[i] = new double(i*1.1);
			cout << *c_array2[i] << endl;
			delete c_array2[i];

		}

	}
	//2a): Malloc/free sind Bibliotheksmethoden wogegen new/delete cpp operatoren sind. Während malloc einen Pointer auf den allozierten Speicher zurückgibt, ruft new zusätzlich zum Allozieren den Konstruktor des entsprechenden Objekts auf. free und delte sind dahingehend identisch, dass sie beide den Destruktor aufrufen und den Speicher anschließend freigeben. 


	void aufgabe3(void)
	{
		cout << "-----------------" << endl << "Aufgabe 3" << endl;

		vector <double> v1(10);
		for (int i = 1; i < 10; i++)
		{
			v1[i] = (i*1.1);
		}
		for (unsigned int i = 0; i < v1.size();i++)
		{
			cout << v1.at(i) << endl;
		}
		//cout << "Element 4 des Vektors: " << v1.at(4) << endl;
	}

	void aufgabe4(void)
	{
		cout << "-----------------" << endl << "Aufgabe 4" << endl;

		klasse1  objekt1(1, 300);
		objekt1.print_data();
	}


	void aufgabe5()
	{
		cout << "-----------------" << endl << "Aufgabe 5" << endl;

		vector <klasse1> vector2(10);

		for (unsigned int i = 0; i < vector2.size(); i++)
		{
			vector2.at(i) = klasse1(i, (double)(i + 10));		// Schreiben eines Objektes in den Vector 
			vector2.at(i).print_data();							//Aufruf membermethode print_data 
		}
	
		klasse1 test1(198989, 200.0);
		int abc = test1.get_data1();
		cout << abc << endl;

	}


	void aufgabe6()
	{
		cout << "-----------------" << endl << "Aufgabe 6" << endl;
	
		string copy;
		ifstream file;
		file.open("C:/Users/Gustav/Desktop/Pog3_Aufg1_ Vorübung/voruebung.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				getline(file, copy);
				cout << copy << endl;
			}
			file.close();
		}
		else
			cout << "Error: Failed to open voruebung.txt" << endl;
	}