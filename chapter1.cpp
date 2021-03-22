#include <iostream>
#include <cstdlib>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
//using namespace std;

// primjeri funkcija
int zapreminaKvadra(int a, int b, int c) {

	return a * b * c;
}

double prosjekOcjena(int ocjena1, int ocjena2, int ocjena3, int ocjena4) {

	return (ocjena1 + ocjena2 + ocjena3 + ocjena4) / 4.0;
}

// Zadatak 01
// Napisati funkciju koja racuna povrsinu P kvadra.
// P = 2 * (a*b + b*c + a*c)

// Zadatak 02
// Napisati funkciju koja racuna povrsinu P kocke.
// P = 6 * a^2

// Zadatak 03
// Napisati funkciju koja racuna zapreminu V valjka.
// P = r^2 * PI * H


int main() {
	// interaktivnost
	/*
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Unesite stranice kvadra: ";
	cin >> a >> b >> c;

	cout << "Zapremina kvadra je: " << zapreminaKvadra(a, b, c) << endl;
	*/
	double zakljucna = prosjekOcjena(5, 3, 2, 5); // 3.75
	int zapremina1 = zapreminaKvadra(3, 7, 10); // 210
	int zapremina2 = zapreminaKvadra(4, 5, 6);  // 120
	int zapremina3a = zapreminaKvadra(2, 3, 7); // 42
	int zapremina3b = zapreminaKvadra(7, 3, 2); // 42

	cout << "zakljucna ocjena: " << zakljucna << endl;
	cout << "zapremine kvadra su: " << zapremina1 << ", " << zapremina2 << ", "
		<< zapremina3a << ", " << zapremina3b << endl;

	return 0;
}
