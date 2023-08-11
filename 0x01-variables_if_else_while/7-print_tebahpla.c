#include <stdio.h>

/**
 * main - prints alpha in reverse
 * Return: -
 */

int main(void)
{
	char de;

	for (de = 'z'; de >= 'a'; de--)
		putchar(de);

	putchar('\n');

	return (0);

}
