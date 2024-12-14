#pragma once
#include<iostream>

using namespace std;

class Kod
{
public:
	Kod();
	void wyswietlKod();
protected:
	string losowanieKodu();
	string kodGry;
};

