#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * for the multiples of 3 print fizz instead
 * for the multiples of 5 print buzz
 * Return: Always 0
 */

int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 5 == 0 && n % 3 == 0)
{
printf("FizzBuzz");
}
else if (n == 1)
{
printf("%i", n);
}
else
{
printf("%i", n);
}
}
printf("\n");
return (0);
}
