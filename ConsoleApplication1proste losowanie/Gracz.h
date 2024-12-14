#pragma once

#include <string>
#include <iostream>

using namespace std;

class Gracz {
public:
	Gracz(string imie_T, int nr_T);

	void wypiszInfo();
	void zmienCzyObywatel();
	bool jakaStrona();

private:
	string imie;
	int nr;
	bool czyObywatel;
};


