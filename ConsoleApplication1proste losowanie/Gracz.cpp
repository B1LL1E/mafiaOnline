#include "Gracz.h"
#include <iostream>
#include <string>

using namespace std;

Gracz::Gracz(string imie_T):
	imie(imie_T), nr(0), czyObywatel(true){
	
}

void Gracz::wypiszInfo() {
	cout << "Gracz nr : " << nr << " : nazwa : " << imie << " : czyObywatel : " << czyObywatel << " : " << endl;
}

void Gracz::zmienCzyObywatel() {
	czyObywatel = !czyObywatel;
}


bool Gracz::jakaStrona() {
	return czyObywatel;
}