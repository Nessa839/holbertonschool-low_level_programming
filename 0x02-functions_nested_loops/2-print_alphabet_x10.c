#include <stdio.h>
#include "holberton.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{

int alphabet = 0;
while (alphabet <= 9)
{
int letter = 97;
while (letter < 123)

{
putchar(letter);
letter++;
}

putchar(10);
alphabet++;
}
}
