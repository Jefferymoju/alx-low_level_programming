#include "main.h"

/**
 * _strncpy - Copy a string from index 0 of 'dest'
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: 'dest' edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0; j < n && src[j] != '\0'; j++)
dest[j] = src[j];

for (; n > j; j++)
dest[j] = '\0';
return (dest);
}
