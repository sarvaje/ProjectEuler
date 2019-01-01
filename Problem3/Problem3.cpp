/*
 * Problem 3:
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143?
 */

#include "pch.h"
#include <iostream>

int Factors(int64_t number) {
	int64_t factor = 2;
	
	while (factor != number) {
		int64_t intPart;

		if (number % factor == 0) {
			number /= factor;
			continue;
		}

		factor++;
	}

	return factor;
}

int main()
{
	double result = Factors(600851475143);
	std::cout << "The largest prime factor of the number 600851475143 is: " << result << std::endl;
}
