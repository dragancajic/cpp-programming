// zadatak1.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 11:27 PM March 10, 2021
 * @subject: Програмирање на језику C++
 */
/* Napisati funkciju koja za argument uzima 3 broja, a kao rezultat vraca
 * aritmeticku sredinu ta tri broja.
 */
double aritmetickaSredina3Broja(int broj1, int broj2, int broj3) {
	return (broj1 + broj2 + broj3) / 3.0;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	cout << "aritmeticka sredina: " << aritmetickaSredina3Broja(10, 12, 14) << endl;

	return 0;
}
