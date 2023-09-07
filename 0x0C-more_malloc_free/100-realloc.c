#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *ptr1, *ptr2;
	unsigned int i;

	if (ptr != NULL)
	ptr1 = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(ptr2 + i) = ptr1[i];
	}
	free(ptr);
return (ptr2);
}
