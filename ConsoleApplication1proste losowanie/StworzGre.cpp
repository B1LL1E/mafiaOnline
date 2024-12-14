#include <iostream>
#include <vector>
#include "Gracz.h"

using namespace std;

//tworzenie gry
void stworzGre(int liczGraczy, int liczMafii) {
	cout << "Tworzenie gry" << endl;

	vector<Gracz*> gracze;


	for (int i = 0; i < liczGraczy; i++) {
		Gracz* nowyGracz = new Gracz(losowanieKodu(), i + 1, 1);
		gracze.push_back(nowyGracz);
	}


	//losowanie mafii
	gracze = losowanieMafii(gracze, liczMafii, liczGraczy);



	//POCZ¥TEK GRY




	for (int i = 0; i < liczGraczy; i++) {
		gracze[i]->wypiszInfo();
	}




	//rozgrywka(liczGraczy, liczMafii);





	for (int i = 0; i < liczGraczy; i++) {
		delete gracze[i];
	}



}