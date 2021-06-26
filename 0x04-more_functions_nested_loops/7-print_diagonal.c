#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - draws a line with /
 * @n: character
 * Return: goes back to zero
 */



void print_diagonal(int n)
{
	int lines, spaces;

	if (n <= 0)
	{
		_putchar ('\n');
			}
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
