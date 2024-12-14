
#include <iostream>
#include "Rozgrywka.h"

using namespace std;

void Rozgrywka::RozgrywkaStart(int liczGraczy, int liczMafii){

	int liczbaDni = 1;

	while (
		//warunki do spelnienia aby gra mogla dalej sie toczyc
		liczMafii < (liczGraczy - liczMafii)
		) {

		//etapy gry /
		cout << "Dzieñ nr : " << liczbaDni << endl;

		//faza dnia
		cout << "Nastaje dzieñ" << endl;
		//dzien();




		// faza nocy
		cout << "Nastaje NOC" << endl;

		
	}
}