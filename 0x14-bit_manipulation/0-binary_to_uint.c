#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: Pointer to the string containing the binary number
 *
 * Return:The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dig;

	dig = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		dig <<= 1;
		if (b[j] == '1')
			dig += 1;
	}
	return (dig);
}
