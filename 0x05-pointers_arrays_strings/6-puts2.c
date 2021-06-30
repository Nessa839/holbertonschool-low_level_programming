#include "holberton.h"


/**
 * puts2 - prints every char from a str
 * @str: string
 * Return: empty
 */



void puts2(char *str)


{
	int fc = 0;

	while (*(str + fc))
	{
		_putchar(*(str + fc));
		fc += 2;
	}
	_putchar('\n');
}
