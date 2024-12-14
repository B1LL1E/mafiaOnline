#include <iostream>
#include <vector>


//losowanie mafii
vector<Gracz*> losowanieMafii(vector<Gracz*> gracze1, int liczMafii, int liczGraczy) {
	cout << "Losowanie mafii" << endl;
	vector<Gracz*> gracze = gracze1;

	//srand(static_cast<int>(time(0)));

	for (int i = 0; i < liczMafii; i++) {
		int nrGracza = (rand() % liczGraczy);
		if (gracze[nrGracza]->jakaStrona() == 0) {
			i = i - 1;
			continue;
		}
		gracze[nrGracza]->zmienCzyObywatel();
	}

	return gracze;
}
