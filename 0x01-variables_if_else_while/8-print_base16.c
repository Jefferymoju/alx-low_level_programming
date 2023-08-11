#include <stdio.h>

/**
 * main - prints numbers in base 16
 * Return: 0
 */
int main(void)
{
	int num;
	char ba;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ba = 'a'; ba <= 'f'; ba++)
		putchar(ba);

	putchar('\n');

	return (0);

}
