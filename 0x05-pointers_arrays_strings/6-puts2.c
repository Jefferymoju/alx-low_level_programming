#include "main.h"

/**
 * puts2 - function prints other character of a string
 *@str: input character
 * Return: print
 */

void puts2(char *str)
{
int a = 0;

for (; str[a] != '\0'; a++)
{
if ((a % 2) == 0)
{
_putchar(str[a]);
}
else
{
continue;
}
}
_putchar('\n');
}
