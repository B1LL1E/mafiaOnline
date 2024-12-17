#include "NowaGra.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <random>

using namespace std;

NowaGra::NowaGra():
	Kod(),
	liczbaObywateli(8),
	liczbaMafiozow(2), 
	liczbaZywychObywateli(8),
	liczbaZywychMafiozow(2)
{
	wypiszGraczy();
	inicjalizacjaGry();
}

NowaGra::NowaGra(int liczbaObywateli_T, int liczbaMafiozow_T) :
	Kod(),
	liczbaObywateli(liczbaObywateli_T),
	liczbaMafiozow(liczbaMafiozow_T),
	liczbaZywychObywateli(liczbaObywateli_T),
	liczbaZywychMafiozow(liczbaMafiozow_T)
{
	wypiszGraczy();
	inicjalizacjaGry();
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

void NowaGra::inicjalizacjaGry() {

	//wersja z botami
	// Losowe tasowanie imion Z CHATU GPT
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(imionaBotow.begin(), imionaBotow.end(), g);


	//nadanie botom imion
	for (int i = 0; i < (liczbaObywateli + liczbaMafiozow); i++) {
		gracze.emplace_back(imionaBotow[i],i);
	}

	

	//wylosowanie mafii
	uniform_int_distribution<> dist(0, gracze.size() - 1);

	vector<int> ktoMafia;
	for (int i = 0; i < liczbaMafiozow; i++) {
		int nowaMafia = dist(g);
		while (find(ktoMafia.begin(), ktoMafia.end(), nowaMafia) != ktoMafia.end()) {
			nowaMafia = dist(g);
		}

		ktoMafia.emplace_back(nowaMafia);
	}

	//zmienia obywateli w mafiozow
	for (int i = 0; i < ktoMafia.size(); i++) {
		gracze[ktoMafia[i]].zmienCzyObywatel();
	}



	//wypisuje info
	for (int i = 0; i < (liczbaObywateli + liczbaMafiozow); i++) {
		gracze[i].wypiszInfo();
	}
}



