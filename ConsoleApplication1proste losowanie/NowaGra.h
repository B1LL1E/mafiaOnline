#pragma once
#include "Kod.h"
class NowaGra : 
	public Kod
{
public:

	NowaGra(); 
	/*domyslnie 
	10 obywateli
	2 mafiozów*/

	void wypiszGraczy();

	//tworzenie botow

private:
	int liczbaObywateli;
	int liczbaMafiozow;
	int liczbaZywychObywateli;
	int liczbaZywychMafiozow;

	void wypiszInfo1(string napis1, int liczba);

};

