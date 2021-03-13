// zadatak5.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

//using std::cin;
//using std::cout;
//using std::endl;
using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 4:30 PM March 12, 2021
 * @subject: Програмирање на језику C++
 */
/* Napisati program koji ispituje da li je broj Armstrongov.
 * Napisati rekurzivnu funkciju koja racuna broj cifara broja.
 */
bool armstrong(int broj) {
	// postavimo neophodne promjenljive na pocetne vrijednosti
	int brojac = 0;
	int suma = 0;
	int trenutniBroj = broj;
	int trenutnaCifra = 0;

	// pokusajmo da "izvrtimo"/prodjemo kroz sve cifre binarnog broja
	while (trenutniBroj > 0) {
		// test 0
		std::cout << "trenutni broj je: " << trenutniBroj << endl;

		// ostatak cjelobrojnog dijeljenja
		trenutnaCifra = trenutniBroj % 10; // 153 % 10 = 3

		// test 1
		cout << "ostatak / cifra jedinica: " << trenutnaCifra << endl;

		suma = suma + trenutnaCifra * trenutnaCifra * trenutnaCifra;

		// test 2
		cout << "trenutna suma: " << suma << endl;

		// brojac cifara
		brojac++;

		// test 3
		cout << "brojac cifara: " << brojac << endl;

		// broj nakon cjelobrojnog dijeljenja
		//trenutniBroj = trenutniBroj / 10;
		trenutniBroj /= 10; // 153 / 10 = 15

		// test 4
		cout << "kolicnik / uslov prekida: " << trenutniBroj << endl;
		cout << endl; // prazna linija

		// ljepsi ispis na konzolu
		if (trenutniBroj != 0)
			cout << "<~~=======~ novi ciklus ~=======~~>" << endl;
		else
			cout << "<~-~-~-~-~ kraj programa ~-~-~-~-~>" << endl;
	}

	if (broj == suma)
		return true;
	else
		return false;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	bool indikator = armstrong(153);

	if (indikator == true)
		cout << "broj JESTE Armstrongov" << endl;
	else
		cout << "broj NIJE Armstrongov!" << endl;

	return 0;
}
