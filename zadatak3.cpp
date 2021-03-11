// zadatak3.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 12:03 PM March 11, 2021
 * @subject: Програмирање на језику C++
 */
/* Napisati funkciju koja kao rezultat vraca broj pojavljivanja
 * cifre 3 u zapisu tog broja.
 */
int brojPojavljivanjaCifre3(int broj) {
	// postavimo brojac pojavljivanja cifre 3 na nulu(0)
	int brojac = 0;
	int trenutnaCifra = 0;

	// pokusajmo da "izvrtimo"/prodjemo kroz sve cifre datog broja
	while (broj > 0) {
		// test 0
		//cout << "zadati broj: " << broj << endl;

		// ostatak cjelobrojnog dijeljenja
		trenutnaCifra = broj % 10; // 123456789 % 10 = 9

		// test 1
		//cout << "ostatak / cifra jedinica: " << trenutnaCifra << endl;

		// provjera da li je trenutna cifra 3
		if (trenutnaCifra == 3) {
			// brojac = brojac + 1;
			brojac++;
		}

		// test 2
		//cout << "brojac cifre 3: " << brojac << endl;

		// broj nakon cjelobrojnog dijeljenja
		//broj = broj / 10;
		broj /= 10; // 123456789 / 10 = 12345678

		// test 3
		//cout << "kolicnik / uslov prekida: " << broj << endl;
		//cout << endl; // prazna linija

		// ljepsi ispis na konzolu
		/*
		if (broj != 0)
			cout << "<~======= novi ciklus =======~>" << endl;
		else
			cout << "<~-~-~-~ kraj programa ~-~-~-~>" << endl;
		*/
	}

	return brojac;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	cout << "broj pojavljivanja cifre 3: " << brojPojavljivanjaCifre3(123456789) << endl;

	// za negativne brojeve -- ova verzija programa NE RADI!!!
	// [ostavljeno za novu verziju programa / poboljsanje] :-)
	//cout << "broj pojavljivanja cifre 3: " << brojPojavljivanjaCifre3(-333) << endl;

	return 0;
}
