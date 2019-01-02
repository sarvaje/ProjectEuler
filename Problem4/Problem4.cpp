/*
 * Problem 4:
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include "pch.h"
#include <iostream>
#include <string>

// Another option is use std::reverse in <algorightm>
std::string Reverse(std::string text) {
	std::string result;

	for (int i = text.size() - 1; i >= 0; i--) {
		result += text[i];
	}

	return result;
}

int Palindrome(int digits) {
	int max = std::pow(10, digits) - 1;
	int min = std::pow(10, digits - 1);
	int maxPalindrome = 0;
	int maxa;
	int maxb = min;

	for (int a = max; a >= min; a--) {
		// Once we find the first palindrome, b can't be lower than that value.
		// not very fan of change the control value, but this improve the performance a lot.
		for (int b = max; b >= maxb; b--) {
			int product = a * b;

			// Using string to keep lefty zeros. Is this necessary?
			std::string number = std::to_string(product);
			std::string inverted = Reverse(number);

			if (number.compare(inverted) == 0) {
				if (product > maxPalindrome) {
					maxa = a;
					maxb = b;
					maxPalindrome = product;

					break;
				}
			}
		}
	}

	return maxPalindrome;
}

int main()
{
	double result = Palindrome(3);
	std::cout << "Largest palindrome mad from the product of two 3-digit number: " << result << std::endl;
}
