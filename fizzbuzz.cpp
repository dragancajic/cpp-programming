// fizzbuzz.cpp by Драган Ћајић <http://learn-pisio.eu5.org/>
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

/**
 * @author: Драган Ћајић
 * @datetime: 8:07 PM March 10, 2021
 * @subject: C++ Programming
 */
/* Write a program that prints the numbers from 1 to 100. But for multiplies
 * of three print "Fizz" instead of the number and for the multiplies of five
 * print "Buzz". For numbers which are multiplies of both three and five print
 * "FizzBuzz".
 */
int main() {

	for (int i = 1; i <= 100; i++) {

		//cout << i << endl;
		if ((i % 3 == 0) && (i % 5 != 0)) {
			cout << "Fizz     | " << i << endl;
		} else if ((i % 5 == 0) && (i % 3 != 0)) {
			cout << "Buzz     | " << i << endl;
		} else if ((i % 5 == 0) && (i % 3 == 0)) {
			cout << "FizzBuzz | " << i << endl;
		} else {
			cout << "         | " << i << endl;
		}
	}

	return 0;
}
