#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: 0
 */
int main(void)
{
	char lc;
	char hc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (hc = 'A'; hc <= 'Z'; hc++)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);

}
