#include "holberton.h"


/**
 * puts2 - prints every char from a str
 * @str: string
 * Return: empty
 */



void puts2(char *str)

{
	int C = 0, last = 0;

	while (str[C++])
		last++;

	for (C = 0; C < last; C += 2)
		_putchar(str[C]);

	_putchar('\n');
}
