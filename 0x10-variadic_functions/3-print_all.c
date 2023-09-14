#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int j;
	va_list args;
	char *str, *separator;

	va_start(args, format);

	separator = "";

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
