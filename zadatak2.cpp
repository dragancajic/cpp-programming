// zadatak2.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 1:31 AM March 11, 2021
 * @subject: Програмирање на језику C++
 */
/* Napisati funkciju koja za argument uzima 4 broja, a vraca minimum.
 */
int minimum4Broja(int broj1, int broj2, int broj3, int broj4) {
	// pretpostavimo da je broj1 najmanji broj od data 4 broja
	int trenutniMinimum = broj1;

	if (broj2 < trenutniMinimum)
		trenutniMinimum = broj2;

	if (broj3 < trenutniMinimum)
		trenutniMinimum = broj3;

	if (broj4 < trenutniMinimum)
		trenutniMinimum = broj4;

	return trenutniMinimum;
}

int main() {

	// pozivanje funkcija vrsimo u glavnoj funkciji
	cout << "minimum zadatih brojeva: " << minimum4Broja(225, -12, 100, 18) << endl;

	return 0;
}
