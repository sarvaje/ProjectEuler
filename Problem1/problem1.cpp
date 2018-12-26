/*
 * Problem 1:
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include "pch.h"
#include <iostream>

int Multiples3and5(int max) {
	int result = 0;

	for (int i = 0; i < max; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			result += i;
		}
	}

	return result;
}

int main()
{
	int result = Multiples3and5(1000);
    std::cout << "Sum of multples of 3 and 5: " << result << std::endl; 
}
