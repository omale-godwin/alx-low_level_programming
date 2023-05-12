#include <stdio.h>
#include "main.h"

int binary_lens(const char *b);
int _powers(int base, int pow);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: String of zeros and ones
 *
 * Return: Converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int max_power = binary_lens(b) - 1;
	int index, power;
	unsigned int integer = 0;

	if (max_power < 0)
		return (0);

	for (index = 0, power = max_power; power >= 0; index++, power--)
	{
		if (b[index] == '1')
			integer += _powers(2, power);
	}

	return (integer);
}

/**
 * binary_lens - finds the length of a string of ones and zeroes
 * @b: String of ones and zeroes
 *
 * Return: Length of string, or 0 if the string contains non-binary digit.
 */

int binary_lens(const char *b)
{
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (-1);
	}

	return (len);
}

/**
 * _powers - raises a number to a power
 * @base: String of zeros and ones
 * @pow: Power to raise number to
 *
 * Return: Number raised.
 */

int _powers(int base, int pow)
{
	int x, num = 1;

	for (x = 0; x < pow; x++)
		num *= base;

	return (num);
}

