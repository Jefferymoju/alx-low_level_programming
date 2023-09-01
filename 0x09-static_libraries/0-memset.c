#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @n: number of bytes of memory area to fill
 * @b: The desired value
 * Description: fill the first 'n' bytes od the memory area pointed to
 * by 's'
 * Return: changed array with new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
