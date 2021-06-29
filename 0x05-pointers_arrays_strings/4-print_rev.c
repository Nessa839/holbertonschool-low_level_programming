#include "holberton.h"

/**
 * print_rev - prints reversed string
 * @s: the string
 * Return: empty
 */


void print_rev(char *s)
{
	int rev = 0;

	while (*(s + rev))
		rev++;
	rev = rev - 1;
	while (rev >= 0)
	{
		_putchar(*(s + rev));
		rev--;
	}
	_putchar('\n');
}
