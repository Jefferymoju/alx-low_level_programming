#include "main.h"

/**
 * flip_bits - Counts the number of bits needes to be flipped
 * to get from one number to another
 * @n: first number
 * @m: The second number to flip n to
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, i = 0;
	unsigned long int curr;
	unsigned long int xor = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = xor >> j;
		if (curr & 1)
			i++;
	}

	return (i);
}
