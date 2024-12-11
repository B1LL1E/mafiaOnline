#include <iostream>
#include <vector>

using namespace std;

//losowanie kodu do gry
string losowanieKodu() {
	string wynik = "";
	string znaki = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Duże litery i cyfry

	for (int i = 0; i < 8; i++) {
		wynik += znaki[rand() % znaki.length()];
	}

	return wynik;
}


class Gracz {
public:
	Gracz(const string imie, int nr, bool czyObywatel) :
		imie(imie), nr(nr), czyObywatel(czyObywatel) {}

	void wypiszInfo() {
		cout << "Gracz nr : " << nr << " : nazwa : " << imie << " : czyObywatel : " << czyObywatel << " : " << endl;
	}
	void zmienCzyObywatel() {
		czyObywatel = !czyObywatel;
	}
private:
	string imie;
	int nr;
	bool czyObywatel;
};

//losowanie mafii
vector<Gracz*> losowanieMafii(vector<Gracz*> gracze1, int liczMafii, int liczGraczy) {
	cout << "Losowanie mafii" << endl;
	vector<Gracz*> gracze = gracze1;

	//srand(static_cast<int>(time(0)));

	for (int i = 0; i < liczMafii; i++) {
		
		gracze[(rand() % liczGraczy)]->zmienCzyObywatel();
	}

	return gracze;
}


void dzien() {

}

void rozgrywka(int liczGraczy, int liczMafii) {

	int liczbaDni = 1;

	while (
		//warunki do spelnienia aby gra mogla dalej sie toczyc
		liczMafii < (liczGraczy - liczMafii)
		) {

		//etapy gry /
		cout << "Dzień nr : " << liczbaDni << endl;

		//faza dnia
		cout << "Nastaje dzień" << endl;
		//dzien();




		// faza nocy
		cout << "Nastaje NOC" << endl;

		break;
	}
}

//tworzenie gry
void stworzGre(int liczGraczy, int liczMafii) {
	cout << "Tworzenie gry" << endl; 

	vector<Gracz*> gracze;


	for (int i = 0; i < liczGraczy; i++) {
		Gracz* nowyGracz = new Gracz(losowanieKodu(), i+1, 1);
		gracze.push_back(nowyGracz);
	}


	//losowanie mafii
	gracze = losowanieMafii(gracze, liczMafii, liczGraczy);



	//POCZĄTEK GRY

	rozgrywka(liczGraczy, liczMafii);


	for (int i = 0; i < liczGraczy; i++) {
		gracze[i]->wypiszInfo();
	}


	for (int i = 0; i < liczGraczy; i++) {
		delete gracze[i];

	}
}





//Główna zawartość gry
int main()
{
	
	system("chcp 1250");
	system("cls");

	srand(static_cast<int>(time(0)));

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

	if (create1 == 1) {
		stworzGre(liczbaGraczy, LiczbaMafii);
	}


	cout << endl;
	cout << "code : " << losowanieKodu() << endl;


}


