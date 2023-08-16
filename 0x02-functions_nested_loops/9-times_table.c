#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 */

void times_table(void)
{
int numb, mul, pr;

for (numb = 0; numb <= 9; numb++)
{
_putchar('0');
for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
pr = numb * mul;
if (pr <= 9)
{
_putchar(' ');
}
else
_putchar((pr / 10) + '0');
_putchar((pr % 10) + '0');
}
_putchar('\n');
}
}
