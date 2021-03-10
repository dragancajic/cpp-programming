#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

// 01 funkcija maksimum (od) 4 broja
int maksimum4Broja(int broj1, int broj2, int broj3, int broj4) {
	int tMax = broj1;

	if (broj2 > tMax)
		tMax = broj2;

	if (broj3 > tMax) {
		tMax = broj3;
	}

	if (broj4 > tMax) {
		tMax = broj4;
	}

	return tMax;
}

// 02 funkcija stepen
// 2^3 = 8; 5^2 = 25
int stepenBroja(int baza, int eksponent) {
	// 5^8 (baza = 5, eksponent = 8) 5 * 5 * 5 * .... * 5
	int rezultat = 1;

	for (int i = 0; i < eksponent; i++)
		rezultat = rezultat * baza;

	return rezultat;
}

// 03 funkcija za zbir cifara
// 2365 --> 16
// 125568 --> 27
// 8 + 6 + 5 + 5 + 2 + 1 ^^^KRAJ^^^ ---> to je rezultat
int zbirCifaraBroja(int broj) {
	int zbirCifara = 0;

	while (broj > 0) {
		// 125568 % 10 = 8
		// 125568 / 10 = 12556
		// zbir cifara povecaj za posljednju cifru
		// posljednja cifra je broj % 10 (8)
		zbirCifara += broj % 10;

		// ostatak tog broja
		broj /= 10; // 125568 ---> 12556
	}

	return zbirCifara;
}

// 04 funkcija za obrnuti broj
// 1234 ---> 4321
int obrnutiBroj(int broj) {
	int rezultat = 0;

	while (broj > 0) {
		// 125568 % 10 = 8
		// 125568 / 10 = 12556
		// 8*10 + 6 = 86
		// 86 * 10 + 5 = 865
		// 865 * 10 + 5 = 8655
		// zbir cifara povecaj za posljednu cifru
		// posljednja cifra je broj % 10 (8)
		int posljednja_cifra = broj % 10;

		// ostatak tog broja (12556)
		broj /= 10; // 125568 ---> 12556
		rezultat = 10 * rezultat + posljednja_cifra;
	}

	return rezultat;
}


int main() {
	cout << "maksimum unesenih brojeva " << maksimum4Broja(-10, 0, 3, 9) << endl;

	cout << "vrijednost stepena je " << stepenBroja(3, -2) << endl;

	cout << "zbir cifara je " << zbirCifaraBroja(20) << endl;

	cout << "obrnuti broj je " << obrnutiBroj(129345) << endl;

	return 0;
}
