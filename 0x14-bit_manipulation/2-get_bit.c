#include"main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to check bits in
 * @index: The index to get the value
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int rev, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	rev = n & div;
	if (rev == div)
		return (1);
	return (0);
}
