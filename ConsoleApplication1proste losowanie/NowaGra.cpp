#include "NowaGra.h"
#include <iostream>
#include <iomanip>

using namespace std;

NowaGra::NowaGra():
	Kod(),
	liczbaObywateli(10),
	liczbaMafiozow(2), 
	liczbaZywychObywateli(10),
	liczbaZywychMafiozow(2)
{
	wypiszGraczy();
}

void NowaGra::wypiszGraczy() {
	cout << "Tworzenie nowej gry" << endl;
	wyswietlKod();

	wypiszInfo1("Liczba Obywateli", liczbaObywateli);
	wypiszInfo1("Liczba Mafiozow", liczbaMafiozow);
	wypiszInfo1("Liczba zywych Obywateli", liczbaZywychObywateli);
	wypiszInfo1("Liczba zywych Mafiozow", liczbaZywychMafiozow);
}

void NowaGra::wypiszInfo1(string napis1, int liczba) {
	cout << setw(25) << left << napis1 << setw(1) << "[" << setw(2) << right << liczba << "]" << endl;
}

