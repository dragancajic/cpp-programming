// reversestring.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

//using std::cin;
using std::cout;
using std::endl;
using std::string;
//using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 11:58 PM March 19, 2021
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

	// pokusajmo da "izvrtimo"/prodjemo kroz sve znakove niske
	unsigned int i = 0;
	// niska.length() -> unsigned int
	while (i < niska.length()) {
		obrnutaNiska += niska[niska.length() - 1 - i];
		cout << obrnutaNiska << endl;
		i++;
	}

	return obrnutaNiska;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	cout << "obrnuta niska je: " << obrniString("dragan") << endl;

	return 0;
}
