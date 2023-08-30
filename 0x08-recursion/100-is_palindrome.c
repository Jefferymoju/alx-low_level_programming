#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int get_len(char *s);
int my_palin(char *s, int j);

int is_palindrome(char *s)
{
	int length;

	length = get_len(s) - 1;

	return (my_palin(s, --length));
}

/**
 * get_len - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_len(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_len(++s));
}

/**
 * my_palin - recursive check of palindrome
 * @s: string
 * @j: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_palin(char *s, int j)
{
	if (*s == *(s + j))
	{
		if (j <= 0)
			return (1);
		else
			return (my_palin(++s, j - 2));
	}
	else
		return (0);
}
