#include "Gracz.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Gracz::Gracz(string imie_T, int nr_T):
	imie(imie_T), nr(nr_T), czyObywatel(true){
	
}

void Gracz::wypiszInfo() {
	cout << "Gracz nr [" << setw(2) << left << nr << "] nazwa [" << setw(9) << imie << "] czyObywatel [" << setw(1) << czyObywatel << "]" << endl;
}

void Gracz::zmienCzyObywatel() {
	czyObywatel = !czyObywatel;
}


bool Gracz::jakaStrona() {
	return czyObywatel;
}