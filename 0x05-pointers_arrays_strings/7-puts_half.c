#include "holberton.h"

/**
 * puts_half - prints the last half of a string
* @str: string
 * Return: void
 */
void puts_half(char *str)
{
int first, second = 0;

while (*(str + second))
second++;
first = second / 2;
if (second % 2)
first += 1;
while (first < second)
{
_putchar(*(str + first));
first++;
}
_putchar('\n');
}
