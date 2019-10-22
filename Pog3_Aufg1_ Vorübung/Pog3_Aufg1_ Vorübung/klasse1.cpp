#include "klasse1.h"
#include <iostream>

using namespace std;



klasse1::klasse1()							//Standardkonstruktor
{

	data1 = 1;
	data2 = 100;
	
}

klasse1::klasse1(int data1, double data2)	//Konstruktor für initialisierung mit Parametern
{
	this->data1 = 2*data1;
	this->data2 = 2*data2;
}


int klasse1::get_data1()
{
	return data1;
}

double klasse1::get_data2()
{
	return data2;
}

void klasse1::print_data()
{
	cout << "data1: " << data1 << endl;
	cout << "data2: " << data2 << endl;
}


klasse1::~klasse1()
{
}
