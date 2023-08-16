#include "main.h"
/**
 * _islower - checks if a character is in lowercase
 * @c: The character to be checked
 * Return: 1 if letter is lowercase else 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
