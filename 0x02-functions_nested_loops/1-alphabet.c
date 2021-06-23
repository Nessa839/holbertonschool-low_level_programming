#include <stdio.h>

/**
* print_alphabet - prints alphabet
* Return: void
*/


void print_alphabet(void)

{
int letter = 97;
while (letter < 123)

{
putchar(letter);
letter++;
}

putchar(10);
}
