#include "Kod.h"
#include <iostream>
#include <string>

using namespace std;

Kod::Kod() :
	kodGry(losowanieKodu())
{

}

//losowanie kodu do gry
string Kod::losowanieKodu() {
	string wynik = "";
	string znaki = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Du¿e litery i cyfry

	for (int i = 0; i < 8; i++) {
		wynik += znaki[rand() % znaki.length()];
	}

	return wynik;
}

void Kod::wyswietlKod() {
	cout << "Kod gry [" << kodGry << "]" << endl;
}