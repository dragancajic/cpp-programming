// reversestring.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
//using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 11:58 PM March 19, 2021
 * @modified: 5:24 PM March 30, 2021
 * @subject: Програмирање на језику C++
 */
/* Za dati string (nisku znakova), napisati funkciju koja vraca novi string
 * (nisku znakova) s obrnutim rasporedom karaktera/znakova.
 */
string obrniString(string niska) {
	// postavimo neophodne promjenljive na pocetne vrijednosti
	string obrnutaNiska = "";

	// test 0
	cout << niska << endl;
	/*
	// pokusajmo da "izvrtimo"/prodjemo kroz sve znakove niske
	unsigned int i = 0;
	// niska.length() -> unsigned int
	while (i < niska.length()) {
		obrnutaNiska += niska[niska.length() - 1 - i];
		cout << obrnutaNiska << endl;
		i++;
	}
	*/
	// newer 'for in' loop syntax
	for (char znak : niska) {
		obrnutaNiska = znak + obrnutaNiska;
	}

	return obrnutaNiska;
}

int main() {
	string niskaZnakova = "";

	cout << "Unesite string/nisku znakova: ";
	cin >> niskaZnakova;

	// pozivanje funkcija vrsimo u glavnoj funkciji
	//cout << "obrnuta niska je: " << obrniString("dragan") << endl;
	cout << "obrnuta niska je: " << obrniString(niskaZnakova) << endl;

	return 0;
}
