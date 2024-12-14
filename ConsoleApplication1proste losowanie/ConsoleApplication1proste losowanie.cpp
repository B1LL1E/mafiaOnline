#include <iostream>
#include <vector>
#include "NowaGra.h"

using namespace std;





//
//
//
//
////losowanie mafii
//vector<gracz*> losowaniemafii(vector<gracz*> gracze1, int liczmafii, int liczgraczy) {
//	cout << "losowanie mafii" << endl;
//	vector<gracz*> gracze = gracze1;
//
//	//srand(static_cast<int>(time(0)));
//
//	for (int i = 0; i < liczmafii; i++) {
//		int nrgracza = (rand() % liczgraczy);
//		if (gracze[nrgracza]->jakastrona() == 0) {
//			i = i - 1;
//			continue;
//		}
//		gracze[nrgracza]->zmienczyobywatel();
//	}
//
//	return gracze;
//}
//
//
//
//void dzien() {
//
//}
//
//
//
//
//
//
////tworzenie gry
//void stworzgre(int liczgraczy, int liczmafii) {
//	cout << "tworzenie gry" << endl; 
//
//	vector<gracz*> gracze;
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		gracz* nowygracz = new gracz(losowaniekodu(), i+1, 1);
//		gracze.push_back(nowygracz);
//	}
//
//
//	//losowanie mafii
//	gracze = losowaniemafii(gracze, liczmafii, liczgraczy);
//
//
//
//	//początek gry
//
//	
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		gracze[i]->wypiszinfo();
//	}
//
//
//
//	
//	//rozgrywka(liczgraczy, liczmafii);
//
//
//
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		delete gracze[i];
//	}
//
//
//	
//}
//
//void stworzgre(int liczgraczy, int liczmafii) {
//	cout << "tworzenie gry" << endl;
//
//	vector<gracz*> gracze;
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		gracz* nowygracz = new gracz(losowaniekodu(), i + 1, 1);
//		gracze.push_back(nowygracz);
//	}
//
//
//	//losowanie mafii
//	gracze = losowaniemafii(gracze, liczmafii, liczgraczy);
//
//
//
//	//początek gry
//
//
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		gracze[i]->wypiszinfo();
//	}
//
//
//
//
//	//rozgrywka(liczgraczy, liczmafii);
//
//
//
//
//
//	for (int i = 0; i < liczgraczy; i++) {
//		delete gracze[i];
//	}
//
//
//
//}



//Główna zawartość gry
int main()
{
	
	system("chcp 1250");
	system("cls");

	srand(static_cast<int>(time(0)));


	//testy
	NowaGra NowaGra1;
	





	int create1;
	int liczbaGraczy = 10 , LiczbaMafii = 2;
	string napisCre = "Create ? (1 or 0)";

	//pyta czy ma stworzyc gre
	cout << napisCre << endl;
	cin >> create1;

	while (create1 != 1 && create1 != 0)
	{
		cout << "Wron number !" << endl;
		cout << napisCre << endl;
		cin >> create1;
	}

	

	//rozpoczecie tworzenia gry
	if (create1 == 1) {

		

		//stworzGre(liczbaGraczy, LiczbaMafii);
	}


}


