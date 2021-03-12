// zadatak4.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 10:46 AM March 12, 2021
 * @subject: Програмирање на језику C++
 */
/* Napisati funkciju koja pretvara binarni broj u decimalni.
 */
int binarnoUDecimalno(int broj) {
	// postavimo neophodne promjenljive na pocetne vrijednosti
	int brojac = 1;
	int decimalno = 0;
	int trenutnaCifra = 0;

	// pokusajmo da "izvrtimo"/prodjemo kroz sve cifre binarnog broja
	while (broj != 0) {
		// test 0
		cout << "broj binarno: " << broj << endl;

		// ostatak binarnog dijeljenja
		trenutnaCifra = broj % 10; // 1010 % 10 = 0

		// test 1
		cout << "ostatak / binarna cifra: " << trenutnaCifra << endl;

		// test 2
		cout << "brojac ciklusa: " << brojac << endl;

		// konverzija binarno u decimalno
		decimalno = decimalno + trenutnaCifra * brojac;

		// brojac = brojac * 2;
		brojac *= 2;

		// broj nakon binarnog dijeljenja
		//broj = broj / 10;
		broj /= 10; // 1010 / 10 = 101

		// test 3
		cout << "kolicnik / uslov prekida: " << broj << endl;

		// test 4
		cout << "decimalno: " << decimalno << endl;
		cout << endl; // prazna linija

		// ljepsi ispis na konzolu

		if (broj != 0)
			cout << "<~~=======~ novi ciklus ~=======~~>" << endl;
		else
			cout << "<~-~-~-~-~ kraj programa ~-~-~-~-~>" << endl;

	}

	return decimalno;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	cout << "broj decimalno je: " << binarnoUDecimalno(1010) << endl;

	cout << endl; // prazna linija

	// N A P O M E N A:
	// zapis binarnog broja u C++ jeziku i njegov ispis na konzolu
	int binarno4 = 0b100; // binarni zapis broja 4
	cout << "ispis broja 0b0100 na konzolu: " << binarno4 << endl; // 4

	int binarno5 = 0b101; // binarni zapis broja 5
	cout << "ispis broja 0b0101 na konzolu: " << binarno5 << endl; // 5

	int binarno10 = 0b1010; // binarni zapis broja 10
	cout << "ispis broja 0b1010 na konzolu: " << binarno10 << endl; // 10

	return 0;
}
