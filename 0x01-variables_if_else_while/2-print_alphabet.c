#include <stdio.h>
/**
 * main - prints alpha in lower case
 * Return: 0
 */
int main(void)
{
	char loc;

	for (loc = 'a'; loc <= 'z'; loc++)
	{
		putchar(loc);
	}
	putchar('\n');
	return (0);

}
