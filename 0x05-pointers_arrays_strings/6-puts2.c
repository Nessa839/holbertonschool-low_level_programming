#include "holberton.h"


/**
 * puts2 - prints every char from a str
 * @str: string
 * Return: empty
 */



void puts2(char *str)

{
	int fc = 0, lc = 0;

	while (str[fc++])
		lc++;

	for (fc = 0; fc < lc; fc += 2)
		_putchar(str[fc]);

	_putchar('\n');
}
