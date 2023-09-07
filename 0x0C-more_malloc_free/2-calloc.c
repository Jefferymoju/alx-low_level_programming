#include <stdlib.h>
#include "main.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in array
 *Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *j;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = malloc(nmemb * size);
	if (j == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
	{
		*((char *)(j) + k) = 0;
	}

	return (j);
}
