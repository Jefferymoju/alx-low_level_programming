#include "main.h"
/**
 * _isalpha - checks if character is a letter
 * @c: letter
 * Return: 1 if successful else 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
