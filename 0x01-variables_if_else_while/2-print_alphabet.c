#include <stdio.h>

/**
 * main - prints alphabet
 * Return:goes back to zero
 */


int main(void)

{
int letter = 97;
while (letter < 123)

{
putchar(letter);
letter++;
}

putchar(10);
return (0);
}
