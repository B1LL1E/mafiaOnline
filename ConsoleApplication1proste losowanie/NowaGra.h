#pragma once
#include "Kod.h"
#include <vector>
#include <iostream>
#include <string>
#include "Gracz.h"

using namespace std;

class NowaGra : 
	public Kod
{
public:

	NowaGra(); 
	/*domyslnie 
	10 obywateli
	2 mafiozów*/

	void wypiszGraczy();

	



private:
	int liczbaObywateli;
	int liczbaMafiozow;
	int liczbaZywychObywateli;
	int liczbaZywychMafiozow;

	void wypiszInfo1(string napis1, int liczba);

	//tworzenie botow
	vector<Gracz> gracze;
	vector<string> imionaBotow = {
		"1Adam", "2Beata", "3Cezary", "4Diana", "5Emilia",
		"6Filip", "7Grzegorz", "8Helena", "9Igor", "10Julia",
		"11Karol", "12Lena", "13Marek", "14Natalia", "15Oskar"
	};

	void inicjalizacjaGry();

};

